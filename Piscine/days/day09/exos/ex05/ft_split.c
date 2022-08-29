/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:05:52 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/22 18:17:53 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_belongs(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_nbwords(char *str, char *charset)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (str[i] != '\0')
	{
		while ((str[i] != '\0') && ft_belongs(str[i], charset))
			i++;
		if (str[i] != '\0')
			nb_words++;
		while ((str[i] != '\0') && !ft_belongs(str[i], charset))
			i++;
	}
	return (nb_words);
}

int	ft_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (*str && !ft_belongs(*str, charset))
	{
		len++;
		str++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		s;
	int		nb_words;
	char	**words;

	i = 0;
	s = 0;
	nb_words = ft_nbwords(str, charset) + 1;
	words = malloc(sizeof(*words) * nb_words);
	while (--nb_words)
	{
		while (str[s] && ft_belongs(str[s], charset))
			s++;
		words[i] = malloc(sizeof(**words) * (ft_len(str + s, charset) + 1));
		j = 0;
		while (str[s] && !ft_belongs(str[s], charset))
			words[i][j++] = str[s++];
		words[i][j] = '\0';
		i++;
	}
	words[i] = 0;
	return (words);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**str;

	if (argc == 3)
	{
		str = ft_split(argv[1], argv[2]);
		if (*str)
		{
			while (*str)
			{
				printf("%s\n", *str);
				str++;
			}
		}
		else
			printf("NULL\n");
	}
}
*/
