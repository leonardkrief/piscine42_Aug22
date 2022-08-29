/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_annexe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduhau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:16:13 by gduhau            #+#    #+#             */
/*   Updated: 2022/08/28 19:04:28 by gduhau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*itoa(int n)
{
	char	*str;
	int		i;
	int		nb;

	nb = n;
	i = 0;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	str = malloc((i + 1) * sizeof(char));
	str[i] = '\0';
	while (--i >= 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

int	power(int n)
{
	int	i;

	i = 1;
	while (n > 0)
	{
		i *= 10;
		n--;
	}
	return (i);
}

char	*equivalence(char *c, t_dict *table)
{
	t_dict	*p;

	p = table;
	while (p)
	{
		if (ft_strcmp(c, p->nbr) == 0)
			return (p->letters);
		p = p->next;
	}
	return ("Error");
}

char	*generator(int n)
{
	char	*str;
	int		i;

	i = 1;
	str = malloc((n + 1) * sizeof(char));
	str[0] = '1';
	while (n-- > 0)
		str[i++] = '0';
	str[i] = '\0';
	return (str);
}
