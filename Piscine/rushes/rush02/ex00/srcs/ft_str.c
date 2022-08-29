/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 05:38:13 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/28 07:20:09 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// > 0 equivalent a s1 < s2
// < 0 equivalent a s1 > s2
// = 0 equivalent a s1 = s2
int	ft_strcmp(char	*s1, char *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (i == j)
	{
		i = 0;
		while (s1[i] && s2[i] && (s1[i] == s2[i]))
			i++;
		return (s2[i] - s1[i]);
	}
	else if (i < j)
		return (1);
	else
		return (-1);
}
