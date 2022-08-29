/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:53:50 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/10 23:03:24 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(int i)
{
	char	d;
	char	u;

	d = '0' + (i / 10);
	u = '0' + (i % 10);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < 98)
	{
		while (j < 100)
		{
			ft_printnbr(i);
			write(1, " ", 1);
			ft_printnbr(j);
			write(1, ", ", 2);
			j++;
		}
		i++;
		j = i + 1;
	}
	write(1, "98 99", 5);
}
