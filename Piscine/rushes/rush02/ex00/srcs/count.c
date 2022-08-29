/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:45:49 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/28 22:45:39 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

//En considerant que buf ne contient qu'une seule et unique ligne, on genere
//le *dict correctement initialise, associe a la ligne. Si la ligne comporte
//quelque erreur que ce soit, on renverra NULL.
t_dict	*ft_create(char *buf)
{
	t_dict	*elem;
	int		len;

	elem = malloc(sizeof(*elem));
	if (!elem)
		return (NULL);
	elem->nbr = NULL;
	if (*buf == '\n')
		return (elem);
	len = valid_atoi_int(buf);
	if (len == 0)
		return (NULL);
	elem->nbr = malloc(sizeof(*(elem->nbr)) * (len + 2));
	if (!(elem->nbr))
	{
		free_dict(elem);
		return (NULL);
	}
	len = ft_create_2(elem, buf);
	if (buf[len] != ':')
	{
		free_dict(elem);
		return (NULL);
	}
	return (ft_letters(elem, buf + len + 1));
}

int	ft_create_2(t_dict *elem, char *buf)
{
	int		i;
	int		l;

	i = 0;
	while ((buf[i] >= 9 && buf[i] <= 13) || buf[i] == ' ')
		i++;
	if (buf[i] == '+' || buf[i] == '-')
	{
		if (buf[i] == '-')
			(elem->nbr)[i] = buf[i];
		i++;
	}
	l = 0;
	while (buf[i] >= '0' && buf[i] <= '9')
	{
		(elem->nbr)[l] = buf[i];
		l++;
		i++;
	}
	while ((buf[i] >= 9 && buf[i] <= 13) || buf[i] == ' ')
		i++;
	return (i);
}

int	valid_atoi_int(char *buf)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while ((buf[i] >= 9 && buf[i] <= 13) || buf[i] == ' ')
		i++;
	if (buf[i] == '+' || buf[i] == '-')
	{
		if (buf[i] == '-')
			len++;
		i++;
	}
	if (buf[i] < '0' || buf[i] > '9')
		return (0);
	while (buf[i] >= '0' && buf[i] <= '9')
	{
		i++;
		len++;
	}
	return (len);
}
