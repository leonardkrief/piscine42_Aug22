/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:55:59 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 17:11:46 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_char_capitalize(char *str)
{
	if ((*str > 'a' - 1) && (*str < 'z' + 1))
		*str = *str - 32;
}

void	ft_char_minimize(char *str)
{
	if ((*str > 'A' - 1) && (*str < 'Z' + 1))
		*str = *str + 32;
}

int	ft_is_alpha(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}

int	ft_treatment(char *str)
{
	int	i;

	i = 1;
	if (!str[0])
		return (0);
	else
	{
		ft_char_capitalize(str);
		while (str[i] && ft_is_alpha(str[i]))
		{
			ft_char_minimize(str + i);
			i++;
		}
		return (i);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_alpha(str[i]))
			i = i + ft_treatment(str + i);
		else
			i++;
	}
	return (str);
}
