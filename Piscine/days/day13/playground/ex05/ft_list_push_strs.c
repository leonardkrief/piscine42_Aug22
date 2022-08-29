/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:42:50 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 22:56:03 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*liste;
	t_list	*suivant;
	int		i;

	i = 1;
	if (size >= 1)
		liste = ft_create_elem(strs[0]);
	while (i < size)
	{
		suivant = liste;
		liste = ft_create_elem(strs[i]);
		liste->next = suivant;
		i++;
	}
	return (liste);
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
