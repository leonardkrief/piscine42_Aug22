/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:42:50 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 23:47:39 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void(*free_fct)(void *))
{
	t_list	*to_free;
	
	while (begin_list)
	{
		to_free = begin_list;
		begin_list = begin_list->next;
		free_fct(to_free->data);
		free(to_free);
	}
}

#include <stdio.h>
int	main(int	argc, char **argv)
{
	t_list	*liste;

	if (argc >= 2)
	{
		liste = ft_list_push_strs(argc - 1, argv + 1);
		printf("%s", (char *)(liste->next->data));
		
	}
}
