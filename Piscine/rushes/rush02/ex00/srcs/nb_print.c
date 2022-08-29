/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduhau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:30:07 by gduhau            #+#    #+#             */
/*   Updated: 2022/08/28 22:20:58 by gduhau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	print_groupe(char *inter, int groupe, t_dict *table, char *nb)
{
	int		dizaine;

	if (ft_strcmp(inter, "000") == 0)
		return ;
	print_centaine(inter, table);
	if (inter[0] != '0' && (inter[1] != '0' || inter[2] != '0') && groupe == 0)
		ft_putstr("and ");
	dizaine = (inter[1] - '0') * 10 + (inter[2] - '0');
	if (dizaine < 20 && dizaine > 9)
		ft_putstr(equivalence(itoa(dizaine), table));
	else
	{
		print_dizaine(inter, table);
		print_unite(inter, table);
	}
	if (groupe >= 1 && ft_strcmp(inter, "000") != 0)
		print_rang(groupe, table, nb);
}

void	print_rang(int groupe, t_dict *table, char *nb)
{
	ft_putstr(" ");
	ft_putstr(equivalence(generator(groupe * 3), table));
	if (*nb && quezero(nb + 1))
		return ;
	if (groupe > 0 && encore_chiffre(nb, 0) == 1)
		ft_putstr(", ");
}

void	print_unite(char *inter, t_dict *table)
{
	char	uni[2];

	uni[0] = inter[2];
	uni[1] = '\0';
	if (inter[2] == '0')
		return ;
	if (inter[1] > '1')
		ft_putstr("-");
	ft_putstr(equivalence(uni, table));
}

void	print_dizaine(char *inter, t_dict *table)
{
	char	diz[3];

	diz[0] = inter[1];
	diz[1] = '0';
	diz[2] = '\0';
	if (inter[1] == '0')
		return ;
	ft_putstr(equivalence(diz, table));
}

void	print_centaine(char *inter, t_dict *table)
{
	char	cent[2];

	cent[0] = inter[0];
	cent[1] = '\0';
	if (inter[0] == '0')
		return ;
	ft_putstr(equivalence(cent, table));
	ft_putstr(" ");
	ft_putstr(equivalence(generator(2), table));
	if (inter[1] != '0' || inter[2] != '0')
		ft_putstr(" ");
}
