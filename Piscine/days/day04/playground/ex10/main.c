/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:29:15 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 03:38:40 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "1234567890";
	char	dest[100];
	int	i;
	int	n;

	i = 0;
	n = ft_strlcpy(dest, src, 4);
	printf("La longueur de la chaine a copier est %d\n", n);
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
}
