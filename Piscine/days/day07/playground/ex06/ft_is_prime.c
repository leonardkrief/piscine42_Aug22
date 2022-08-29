/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 03:05:17 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/23 02:50:15 by lkrief           ###   ########.fr       */
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

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%d", ft_is_prime(2147483647));
//	while (argc++ < 100)
//		printf("%d %d\n", argc, ft_is_prime(argc));
	
}
