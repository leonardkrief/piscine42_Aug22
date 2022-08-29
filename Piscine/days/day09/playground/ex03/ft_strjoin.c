/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 02:25:33 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/24 22:18:32 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_taille(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	taille;
	int	taille_sep;

	i = 0;
	taille = 0;
	taille_sep = ft_strlen(sep);
	while (i < size - 1)
	{
		taille = taille + ft_strlen(strs[i]) + taille_sep;
		i++;
	}
	taille = ft_strlen(strs[i]) + 1;
	return (taille);
}

void	ft_copie(int size, char **strs, char *sep, char **str)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			(*str)[s] = strs[i][j];
			s++;
		}
		j = -1;
		if (i++ < size - 1)
		{
			while (sep[++j])
			{
				(*str)[s] = sep[j];
				s++;
			}
		}
	}
	(*str)[s] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		taille;
	char	*str;

	if (!size)
	{
		str = malloc(sizeof(*str));
		*str = '\0';
	}
	else
	{
		str = malloc(sizeof(*str) * taille);
		ft_copie(size, strs, sep, &str);
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;

	if (argc > 1)
	{	
		str = ft_strjoin(argc - 1, argv + 1, ",");
		printf("%s", str);
	}
	else
	{
		str = ft_strjoin(argc - 1, argv, "\n");
		printf("%s", str);
		if (str == 0)
			printf("NULL");
	}
}
