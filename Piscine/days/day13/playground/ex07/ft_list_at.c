/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:42:50 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 23:53:03 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list && (nbr-- > 0))
		begin_list = begin_list->next;
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
