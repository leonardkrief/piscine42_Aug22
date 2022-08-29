/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:01:04 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/18 00:43:09 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) > 1)
	{
		while (base[i])
		{
			if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' '
				|| base[i] == '+' || base[i] == '-')
				return (0);
			j = i + 1;
			while (base[j])
			{
				if (base[i] != base[j])
					j++;
				else
					return (0);
			}
			i++;
		}
		return (1);
	}
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	z;
	unsigned int	taille_base;

	z = -(nbr < 0) * nbr + (nbr >= 0) * nbr;
	taille_base = ft_strlen(base);
	if (check_base(base))
	{
		if (nbr < 0)
			ft_putchar('-');
		if (z < taille_base)
			ft_putchar(base[z]);
		else
		{
			ft_putnbr_base(z / taille_base, base);
			ft_putchar(base[z % taille_base]);
		}
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr_base(atoi(argv[2]), argv[1]);
	
	//printf("%d", check_base("12345678dc09"));
}
*/
