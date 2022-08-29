/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:29:23 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 19:42:19 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ops.h"

int	atoi(char *str)
{
	int	i;
	int	signe;
	int	res;

	i = 0;
	signe = 1;
	res = 0;
	while (str[i] && (str[i] >= 9 && str[i] <= 13 || str[i] == 32))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + str[i] - '0';
		i++;
	}
	return (signe * res);
}

void	ft_putnbr(int	nb)
{
	char			c;
	unsigned int	z;

	z = -(nb < 0) * nb + (nb >= 0) * nb;
	c = z % 10 + '0';
	if (nb < 0)
		write(1, "-", 1);
	if (z < 10)
		write(1, &c, 1);
	else
	{
		ft_putnbr(z / 10);
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	char	signes[6];
	int (*f)(int, int) ops[5];

	if (argc == 4)
	{
		i = 0;
		signes = "+-*/%";
		ops = {&f_plus, &f_moins, &f_fois, &f_div, &f_mod};
		while (argv[2][0] != signes[i] && i < 5)
				i++;
		if (argv[2][1] == 0 && i < 5)
			ft_putnbr(ops[i](atoi(argv[1]), atoi(argv[3])));
		else
			ft_putnbr(0);
	}
	else
		ft_putnbr(0);
}
