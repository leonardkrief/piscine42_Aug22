/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:42:50 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/26 00:03:37 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_at(t_list **begin_list)
{
	t_list	*prec;
	
	while (begin_list)
		prec = begin_list->next;
	if (nbr == 0)
		return (begin_list);
	else
		return (NULL);
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
