/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 04:00:57 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/17 00:58:31 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while ((to_find[j] != '\0') && (str[i + j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	if (str[i + j] == to_find[j])
		return (str + i);
	else
		return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	//	char str[] = "";
	//	char to_find[] = "";
	if (argc > 2)
	{
		printf("Mien = %s\n", ft_strstr(argv[1], argv[2]));
		printf("Reel = %s\n",    strstr(argv[1], argv[2]));
	//	printf("Mien = %s\n", ft_strstr(str, to_find));
	//	printf("Reel = %s\n",    strstr(str, to_find));		
	}
}
*/
