/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 03:01:29 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/20 14:29:20 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	z;

	i = 1;
	z = nb;
	if (nb <= 0)
		return (0);
	while (i * i < z)
		i++;
	if (i * i == z)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	i;
	int	u;
	if (argc == 2)
		printf("%d", ft_sqrt(atoi((argv[1]))));
	else
	{
		i = 0;
		while (i <= 100)
		{
			u = ft_sqrt(i);
			if (u)
				printf("sqrt(%d) = %d\n", i, u);
			i++;
		}
	}
}*/
