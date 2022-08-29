/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:42:50 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 21:56:01 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	int	x = 10;
	int	y = 11;
	int	z = 20;

	t_list	*elem1 = ft_create_elem(&x);
	t_list	*elem2 = ft_create_elem(&y);
	t_list	*elem3 = ft_create_elem(&z);

	elem1->next = elem2;
	elem2->next = elem3;
	
	ft_list_push_front(&elem1, &z);
	printf("%d", ft_list_size(elem1));
}
