/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:21:05 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/21 17:37:55 by schai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define N 4

int		valide_str(char *str);
int		**init_board(char *str);
int		solves_board(int **board);
void	print_board(int **board);
int		valide_constraints(char *str);
void	free_board(int **board);

int	main(int argc, char **argv)
{
	int	**board;

	if (argc == 2)
	{
		if (valide_str(argv[1]) && valide_constraints(argv[1]))
		{
			board = init_board(argv[1]);
			if (board)
			{
				if (solves_board(board) == 1)
					print_board(board);
				else
					write(1, "Error\n", 6);
			}
			else
				write(1, "Error\n", 6);
			free_board(board);
		}
		else
			write(1, "Error\n", 6);
	}
}
