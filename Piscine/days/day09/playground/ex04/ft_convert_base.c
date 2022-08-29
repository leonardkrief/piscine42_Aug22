/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:41:02 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/23 23:11:58 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_strlen(char *str);
void			moins(char **str, int nb);
unsigned int	taille_nbr(int nb, char *base_to);

int	in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
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
		while (in_base(str[i], base) >= 0)
		{
			n = (taille_base * n) + in_base(str[i], base);
			i++;
		}
	}
	return (signe * n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nb;
	char			*str;
	unsigned int	z;
	unsigned int	taille_base;
	unsigned int	taille_nb;

	str = NULL;
	if (check_base(base_from) && check_base(base_to))
	{
		taille_base = ft_strlen(base_to);
		nb = ft_atoi_base(nbr, base_from);
		z = -(nb < 0) * nb + (nb >= 0) * nb;
		taille_nb = taille_nbr(nb, base_to);
		str = malloc(sizeof(*str) * (taille_nb + 1));
		str[taille_nb] = '\0';
		moins(&str, nb);
		while (z > taille_base - 1)
		{
			str[taille_nb - 1] = base_to[z % taille_base];
			z = z / taille_base;
			taille_nb--;
		}
		str[taille_nb - 1] = base_to[z % taille_base];
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*d;

	if (argc == 4)
	{
		d = ft_convert_base(argv[1], argv[2], argv[3]);
		if (d)
			printf("%s", d);
		else if (d == NULL)
			printf("NULL");
	}
}*/
