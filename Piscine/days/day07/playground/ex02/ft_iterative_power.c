/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:31:16 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/20 14:39:16 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int					signe;
	unsigned int		z;
	unsigned int		a;

	z = 1;
	a = (-(nb < 0) + (nb >= 0)) * nb;
	signe = 1;
	if (nb < 0 && (power % 2 == 1))
		signe = -1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power-- > 0)
			z = z * a;
		return (signe * z);
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
*/
