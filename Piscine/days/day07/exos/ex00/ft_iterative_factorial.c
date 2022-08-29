/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:31:16 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/18 23:50:40 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = (nb == 0);
	if (nb > 0)
	{
		n = 1;
		while (i <= nb)
		{
			n = n * i;
			i++;
		}
	}
	return (n);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
}
*/
