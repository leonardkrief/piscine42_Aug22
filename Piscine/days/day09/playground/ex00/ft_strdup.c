/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:05:27 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/22 18:11:28 by lkrief           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		size_src;
	char	*copy;

	size_src = ft_strlen(src);
	copy = malloc(sizeof(*copy) * (size_src + 1));
	if (copy == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < size_src)
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	if (argc == 2)
	{
		str = ft_strdup(argv[1]);
		if (str)
		{
			printf("%s", str);
			free(str);
		}
		else
			printf("NULL");
	}
}
*/
