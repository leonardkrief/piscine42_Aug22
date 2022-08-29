/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_annexe2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduhau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:52:41 by gduhau            #+#    #+#             */
/*   Updated: 2022/08/28 21:45:33 by gduhau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	quezero(char *nb)
{
	int	i;

	i = 0;
	while (nb[i] != '\0')
	{
		if (nb[i] > '0')
			return (0);
		i++;
	}
	return (1);
}

int	key_found(t_dict *table, t_dict *tab_file)
{
	t_dict	*p;
	int		compt;

	compt = 0;
	while (table)
	{
		p = tab_file;
		while (p)
		{
			if (ft_strcmp(table->nbr, p->nbr) == 0)
				compt++;
			p = p->next;
		}
		table = table->next;
	}
	if (compt == 41)
		return (1);
	return (0);
}
