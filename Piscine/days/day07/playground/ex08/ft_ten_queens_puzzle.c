/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 03:20:45 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/18 20:46:45 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_board(char **board)
{
	int	i;
	
	i = 0;
	while (i < 100)
	{
		(*board)[i] = 1;
		i++;
	}
}
/*
char	*copy_board(char *board)
{
	int	i;
	char	copy[100];

	while (i < 100)
		copy[i] = board[i];
	return (copy);
}
*/

// i = line_number ; j = column_number
void	new_queen(char *board, int i, int j)
{
	int	n;

	n = 0;
	while (n < 10)
	{
		if (n != j)
			board[10 * n + i] = 0;
		if (n != i)
			board[10 * j + n] = 0;
		if ((i - n) >= 0 && (j - n) >= 0 && n > 0)
			board[10 * (j - n) + (i - n)] = 0;
		if ((i + n) <= 9 && (j + n) <= 9 && n > 0)
			board[10 * (j + n) + (i + n)] = 0;
		if ((i - n) >= 0 && (j + n) <= 9 && n > 0)
			board[10 * (j + n) + (i - n)] = 0;
		if ((i + n) <= 9 && (j - n) >= 0 && n > 0)
			board[10 * (j - n) + (i + n)] = 0;
		n++;
	}
}
/*
void	computing(char **board, int columns)
{
	int	lines;
	
	lines = 0;
	if (columns == 9)
		
	else
	{
		while (lines < 10)
		{
			if (board[lines][columns])
			{
				new_queen(board, lines, columns);
				computing(board, columns + 1);
			}
			lines++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char **board;

	board = init_board();
	fill_board(board);
}
*/

#include <stdio.h>
void	print_board(char *board)
{
	int	i;

	i = 0;
	while(board[i])
	{
		if(i > 0 && !(i % 10))
			printf("\n");
		printf("%c", board[i]);
		i++;
	}
}

int	main(void)
{
	char	*board;

	init_board(&board);
	new_queen(board, 2, 6);
	print_board(board);
}
