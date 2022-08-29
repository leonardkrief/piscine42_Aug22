/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solves_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:11:49 by schai             #+#    #+#             */
/*   Updated: 2022/08/21 18:30:49 by schai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define N 4

int		safe_view(int **board, int ligne, int colonne);
int		safe_colup(int **board, int colonne);
int		safe_coldown(int **board, int colonne);
int		safe_rowleft(int **board, int ligne);
int		safe_rowright(int **board, int ligne);
void	print_board(int **board);

int	safe_place(int **board, int ligne, int colonne, int num)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < N + 1)
	{
		if (board[ligne][j] == num)
			return (0);
		j++;
	}
	while (i < N + 1)
	{
		if (board[i][colonne] == num)
			return (0);
		i++;
	}
	return (1);
}

int	find_empty(int **board, int *ligne, int *colonne )
{
	int	i;
	int	j;

	i = 0;
	while (++i < N + 1)
	{
		j = 0;
		while (++j < N + 1)
		{
			if (board[i][j] == 0)
			{
				*ligne = i;
				*colonne = j;
				return (1);
			}
		}	
	}
	return (0);
}

int	solves_board(int **board)
{
	int	ligne;
	int	colonne;
	int	num;

	num = 0;
	if (find_empty(board, &ligne, &colonne) == 0)
		return (1);
	while (++num < N + 1)
	{
		if (safe_place(board, ligne, colonne, num))
		{
			board[ligne][colonne] = num;
			if (safe_colup(board, colonne) && safe_coldown(board, colonne)
				&& safe_rowleft(board, ligne) && safe_rowright(board, ligne))
			{
				if (solves_board(board))
					return (1);
				else
					board[ligne][colonne] = 0;
			}
			board[ligne][colonne] = 0;
		}
	}
	return (0);
}
