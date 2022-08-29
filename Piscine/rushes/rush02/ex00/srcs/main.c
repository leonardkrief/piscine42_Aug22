/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:09:54 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/28 23:37:05 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	error(void)
{
	ft_putstr("Error\n");
	return (0);
}

int	dict_error(void)
{
	ft_putstr("Dict Error\n");
	return (0);
}

int	arg_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-' && str[i + 1] == '0')
		i++;
	j = i;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (-1);
	while (str[j] >= '0' && str[j] <= '9' && str[j] != '\0')
		j++;
	if (str[j] != '\0')
		i = -1;
	return (i);
}

int	main(int ac, char *av[])
{
	t_dict	*table;
	t_dict	*tab_file;

	tab_file = NULL;
	table = NULL;
	if (ac != 2 && ac != 3)
		return (error());
	table = gen_dict("dict.txt", table, 0, -1);
	if (table == NULL)
		return (dict_error());
	if (ac == 2 && arg_valid(av[1]) == -1)
		return (error());
	else if (ac == 2)
		initialisation_affichage(av[1] + arg_valid(av[1]), table);
	else if (ac == 3)
	{
		if (arg_valid(av[2]) == -1)
			return (error());
		tab_file = gen_dict(av[1], tab_file, 0, -1);
		if (tab_file == NULL || key_found(table, tab_file) == 0)
			return (dict_error());
		initialisation_affichage(av[2] + arg_valid(av[2]), tab_file);
		free_dict(tab_file);
	}
	free_dict(table);
}
