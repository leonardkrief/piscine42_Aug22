/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:21:05 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/21 17:25:36 by schai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 4

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(int **board)
{
	int	i;
	int	j;

	i = 1;
	while (i < N + 1)
	{
		j = 1;
		while (j < N + 1)
		{
			ft_putchar('0' + board[i][j]);
			if (j < N)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
