/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:30:36 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/22 02:24:30 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	*range = NULL;
	if (min >= max)
		return (0);
	else
	{
		*range = malloc(sizeof(**range) * (max - min));
		if (*range == NULL)
			return (-1);
		i = 0;
		while (min + i < max)
		{
			(*range)[i] = min + i;
			i++;
		}
		return (i);
	}
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	z;
	int	*range;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		z = ft_ultimate_range(&range, a, b);
		//if (a < b)
		//{
		//	while (a < b)
		//	{
		//		printf("%d ", *range);
		//		range++;
		//		a++;
		//	}
		//}
		if (range == NULL)
			printf("range = NULL");
		else
			printf("Error");
		printf("%d", z);
		free (range);
	}
}
*/
