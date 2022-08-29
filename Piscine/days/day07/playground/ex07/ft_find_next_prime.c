/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 03:09:48 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/24 19:04:02 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	z;
	unsigned int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else
	{
		z = nb;
		while (i * i <= z)
		{
			if (z % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	q;

	if (nb < 3)
		return (2);
	else
	{
		q = nb - (nb % 6) + 1;
		while (1)
		{
			if (q >= nb && ft_is_prime(q))
				return (q);
			else
				q += 4 * (q % 6 == 1) + 2 * (q % 6 == 5);
		}
	}
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_find_next_prime(atoi(argv[1])));
	
}
