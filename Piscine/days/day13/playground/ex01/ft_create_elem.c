/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:05:38 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 21:04:45 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
t_list	*ft_create_elem(void *data)
{
	t_list	*maillon;

	maillon = malloc(sizeof(*maillon));
	maillon->data = data;
	maillon->next = NULL;
}
/*
#include <stdio.h>
int	main(void)
{
	int		x;
	t_list	*maille;

	x = 12;
	maille = ft_create_elem(&x);
	printf("%d", *(int *)(maille->data));
}
*/
