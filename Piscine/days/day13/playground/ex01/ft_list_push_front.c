/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:24:43 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 22:51:57 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*maillon;

	maillon = malloc(sizeof(*maillon));
	if (maillon)
	{
		maillon->data = data;
		maillon->next = *begin_list;
		 *begin_list = maillon;
	}
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
	printf("%d", *(int *)(elem1->next->next->next->next->data));
}
