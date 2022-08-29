/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:29:15 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 20:10:35 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[10] = "126780";
	char	dest[7];
	int	n;
	
	n = 7;
	printf("%s\n", ft_strncpy(dest, src, n));
	printf("%s\n",    strncpy(dest, src, n));
	n++;
}
