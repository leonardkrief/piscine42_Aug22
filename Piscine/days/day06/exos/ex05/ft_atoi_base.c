/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:41:02 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/18 00:44:29 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valeur(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) > 1)
	{
		while (base[i])
		{
			if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' '
				|| base[i] == '+' || base[i] == '-')
				return (0);
			j = i + 1;
			while (base[j])
			{
				if (base[i] != base[j])
					j++;
				else
					return (0);
			}
			i++;
		}
		return (1);
	}
	else
		return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	signe;
	int	taille_base;

	i = 0;
	n = 0;
	signe = 1;
	taille_base = ft_strlen(base);
	if (check_base(base))
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			signe = -(str[i] == '-') * signe + (str[i] == '+') * signe;
			i++;
		}
		while (in_base(str[i], base))
		{
			n = (taille_base * n) + valeur(str[i], base);
			i++;
		}
	}
	return (signe * n);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
//	if (argc > 2)
//		printf("%d", ft_atoi_base(argv[2], argv[1]));
	printf("%d\n", ft_atoi_base("1000", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("1000", "01234567"));
	printf("%d\n", ft_atoi_base("1000", "01"));
	printf("%d\n", ft_atoi_base("1000", "0123456789"));
	printf("%d\n", ft_atoi_base("n000", "OVNIbovin"));

}
*/
