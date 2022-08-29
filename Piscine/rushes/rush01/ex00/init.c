/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:21:05 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/21 18:30:24 by schai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define N 4

int		fill_colup(int **board);
int		fill_coldown(int **board);
int		fill_rowright(int **board);
int		fill_rowleft(int **board);
int		solves_board(int **board);
void	free_board(int **board);
void	print_board(int **board);
void	ft_putchar(char c);

// generation du board a l'aide de la string passee en argument
int	**gen_board(char *str)
{
	int	**board;
	int	i;

	i = 0;
	board = malloc(sizeof(*board) * (N + 2));
	while (i < N + 2)
	{
		board[i] = malloc(sizeof(**board) * (N + 2));
		i++;
	}
	i = 0;
	while (i < N)
	{
		board[0][i + 1] = str[2 * i] - '0';
		board[i + 1][0] = str[2 * (i + 2 * N)] - '0';
		board[N + 1][1 + i] = str[2 * (i + N)] - '0';
		board[1 + i][N + 1] = str[2 * (i + 3 * N)] - '0';
		i++;
	}
	return (board);
}

int	**init_board(char *str)
{
	int	**board;

	board = gen_board(str);
	if (fill_rowright(board) && fill_rowleft(board)
		&& fill_colup(board) && fill_coldown(board))
		return (board);
	else
		return (0);
}

int	valide_constraints(char *str)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (((str[2 * i] - '0') + (str[2 * i + 2 * N] - '0') < 3))
			return (0);
		if ((str[2 * i + 4 * N] - '0') + (str[2 * i + 6 * N] - '0') > N + 1)
			return (0);
		i++;
	}
	return (1);
}

int	valide_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '0' || str[i] > '0' + N)
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i == 8 * N - 1)
		return (1);
	else
		return (0);
}
