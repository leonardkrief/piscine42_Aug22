/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:41:02 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/18 01:24:47 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	z;

	z = (nbr < 0) * (-nbr) + (nbr >= 0) * nbr;
	if (nbr < 0)
		ft_putchar('-');
	if (z < 10)
		ft_putchar('0' + (z % 10));
	else
	{
		ft_putnbr(z / 10);
		ft_putchar('0' + (z % 10));
	}
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(atoi(argv[1]));

}

