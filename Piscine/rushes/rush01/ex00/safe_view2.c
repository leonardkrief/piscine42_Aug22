/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_view2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:26:12 by schai             #+#    #+#             */
/*   Updated: 2022/08/21 17:09:19 by schai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define N 4

int	safe_colup(int **board, int colonne)
{
	int	i;
	int	max;
	int	colup;

	max = 0;
	i = 1;
	colup = board[0][colonne];
	while (i < N + 1)
	{
		if (board[i][colonne] == 0)
			return (1);
		if (board[i][colonne] > max)
		{
			max = board[i][colonne];
			colup--;
		}
		i++;
	}
	if (colup == 0)
		return (1);
	return (0);
}

int	safe_coldown(int **board, int colonne)
{
	int	i;
	int	max;
	int	coldown;

	max = 0;
	coldown = board[N + 1][colonne];
	i = N;
	while (i > 0)
	{
		if (board[i][colonne] == 0)
			return (1);
		if (board[i][colonne] > max)
		{
			max = board[i][colonne];
			coldown--;
		}
		i--;
	}
	if (coldown == 0)
		return (1);
	return (0);
}

int	safe_rowleft(int **board, int ligne)
{
	int	i;
	int	max;
	int	rowleft;

	max = 0;
	i = 1;
	rowleft = board[ligne][0];
	while (i < N + 1)
	{
		if (board[ligne][i] == 0)
			return (1);
		if (board[ligne][i] > max)
		{
			max = board[ligne][i];
			rowleft--;
		}
		i++;
	}
	if (rowleft == 0)
		return (1);
	return (0);
}

int	safe_rowright(int **board, int ligne)
{
	int	i;
	int	max;
	int	rowright;

	max = 0;
	rowright = board[ligne][N + 1];
	i = N;
	while (i > 0)
	{
		if (board[ligne][i] == 0)
			return (1);
		if (board[ligne][i] > max)
		{
			max = board[ligne][i];
			rowright--;
		}
		i--;
	}
	if (rowright == 0)
		return (1);
	return (0);
}
