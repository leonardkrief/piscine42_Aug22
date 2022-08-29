/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:20:41 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/24 21:00:23 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size_src;
	char	*copy;

	size_src = ft_strlen(src);
	copy = malloc(sizeof(*copy) * (size_src + 1));
	if (!copy)
		return (NULL);
	else
	{
		i = 0;
		while (i < size_src)
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*tab;

	tab = malloc(sizeof(*tab) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (av[i])
	{
		tab[i].size = len;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
		{
			j = 0;
			while (j < i)
				free(tab[j++].copy);
			free(tab);
			return (NULL);
		}
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
