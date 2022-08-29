/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduhau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:06:18 by gduhau            #+#    #+#             */
/*   Updated: 2022/08/28 21:05:00 by gduhau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	initialisation_affichage(char *nb, t_dict *table)
{
	int	groupe;
	int	surplus;

	groupe = (ft_strlen(nb) - 1) / 3;
	surplus = ft_strlen(nb) % 3;
	affichage_nb(nb, groupe, table, surplus);
}

void	affichage_nb(char *nb, int groupe, t_dict *table, int surplus)
{
	char	inter[4];

	if (verification_zero(nb, table) == 0)
		return ;
	if (surplus % 3 == 1)
	{
		if (nb[0] != '0')
			print_groupe(gref(inter, '0', '0', nb[0]), groupe, table, nb);
		nb++;
		groupe--;
	}
	else if (surplus % 3 == 2)
	{
		if (nb[0] != '0' || nb[1] != '0')
			print_groupe(gref(inter, '0', nb[0], nb[1]), groupe, table, nb);
		nb = nb + 2;
		groupe--;
	}
	while (groupe >= 0 && *nb)
	{
		print_groupe(gref(inter, nb[0], nb[1], nb[2]), groupe--, table, nb);
		nb = nb + 3;
	}
}

char	*gref(char *inter, char a, char b, char c)
{
	inter[0] = a;
	inter[1] = b;
	inter[2] = c;
	inter[3] = '\0';
	return (inter);
}

int	encore_chiffre(char *nb, int i)
{
	int	j;

	j = i + 3;
	while (nb[i] != '\0' && i < j)
	{
		if (nb[i] > '0')
			return (1);
		i++;
	}
	return (0);
}

int	verification_zero(char *nb, t_dict *table)
{
	int	i;

	i = 0;
	while (nb[i] != '\0')
	{
		if (nb[i] != '0')
			return (1);
		i++;
	}
	ft_putstr(equivalence("0", table));
	return (0);
}
