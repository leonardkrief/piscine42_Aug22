/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:46:42 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/12 11:37:54 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	p = 12;
	int	q = 122;

	a = &p;
	b = &q;

	printf("a = %d\nb = %d\n\n", *a, *b);
	ft_swap(a, b);
	printf("a = %d\nb = %d\n\n", *a, *b);
}