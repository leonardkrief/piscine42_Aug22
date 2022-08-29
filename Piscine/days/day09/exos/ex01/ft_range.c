/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:30:36 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/22 18:36:19 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	else
	{
		range = malloc(sizeof(*range) * (max - min));
		i = 0;
		while (min + i < max)
		{
			range[i] = min + i;
			i ++;
		}
		return (range);
	}
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	*range;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		range = ft_range(a, b);
		if (a < b)
		{
			while (a < b)
			{
				printf("%d ", *range);
				range++;
				a++;
			}
		}
		else if (range == NULL)
			printf("range = NULL");
		else
			printf("Error");	
	}
}
*/
