/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:42:33 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/12 14:51:59 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;

	n = 0;
	while (n < size / 2)
	{
		ft_swap(tab + n, tab + (size - 1 - n));
		n++;
	}
}



int	main(void)
{
	int	str[] = {1, 2, 3, 4, 5, 8, 9};
	int	n = 7;
	int	i = 0;
	
	ft_rev_int_tab(str, n);

	while(i < n)
	{
		printf("%d", str[i]);
		i++;
	}
}
