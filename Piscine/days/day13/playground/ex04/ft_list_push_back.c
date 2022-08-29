/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:42:50 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 22:30:00 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem(data);
	if (*begin_list == 0)
		*begin_list = elem;
	else
	{
		while ((*begin_list)->next)
			*begin_list = (*begin_list)->next;
		(*begin_list)->next = elem;
	}
}

#include <stdio.h>
int	main(void)
{
	int	x = 10;
	int	y = 11;
	int	z = 20;
	int	l = -100;

	t_list	*elem1 = ft_create_elem(&x);
	t_list	*elem2 = ft_create_elem(&y);
	t_list	*elem3 = ft_create_elem(&z);
	t_list	*elem4 = ft_create_elem(&l);
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	ft_list_push_back(&elem1, &x);
	printf("%d", *(int *)(ft_list_last(elem1)->data));
}
