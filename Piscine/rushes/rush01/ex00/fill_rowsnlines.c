/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_rowsnlines.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:21:05 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/21 17:05:56 by schai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4 

int	fill_colup(int **board)
{
	int	i;
	int	j;

	j = 0;
	while (++j <= N)
	{
		i = 1;
		if (board[0][j] == 1)
		{
			if (board[i][j] != 0 && board[i][j] != N)
				return (0);
			board[i][j] = N;
		}
		else if (board[0][j] == N)
		{
			while (i <= N)
			{
				if (board[i][j] != 0 && board[i][j] != i)
					return (0);
				board[i][j] = i;
				i++;
			}
		}
	}
	return (1);
}

int	fill_coldown(int **board)
{
	int	i;
	int	j;

	j = 0;
	while (++j <= N)
	{
		i = N;
		if (board[N + 1][j] == 1)
		{
			if (board[i][j] != 0 && board[i][j] != N)
				return (0);
			board[i][j] = N;
		}
		else if (board[N + 1][j] == N)
		{
			while (i >= 1)
			{
				if (board[i][j] != 0 && board[i][j] != N + 1 - i)
					return (0);
				board[i][j] = N + 1 - i;
				i--;
			}
		}
	}
	return (1);
}

int	fill_rowleft(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= N)
	{
		j = 1;
		if (board[i][0] == 1)
		{
			if (board[i][j] != 0 && board[i][j] != N)
				return (0);
			board[i][j] = N;
		}
		else if (board[i][0] == N)
		{
			while (j <= N)
			{
				if (board[i][j] != 0 && board[i][j] != j)
					return (0);
				board[i][j] = j;
				j++;
			}
		}
	}
	return (1);
}

int	fill_rowright(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= N)
	{
		j = N;
		if (board[i][N + 1] == 1)
		{
			if (board [i][j] != 0 && board[i][j] != N)
				return (0);
			board[i][j] = N;
		}
		else if (board[i][N + 1] == N)
		{
			while (j >= 1)
			{
				if (board[i][j] != 0 && board[i][j] != N + 1 - j)
					return (0);
				board[i][j] = N + 1 - j;
				j--;
			}
		}
	}
	return (1);
}
