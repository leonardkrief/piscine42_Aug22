/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:29:15 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/16 00:39:43 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[100] = "12iklnwlfknelgnvenvklknvglkwnvlkwenlkvnwlkvnwlkvnwlkvnlwkfngvlkebnv6780&*&*";
	char	dest[1];
	int	n;
	
	n = 4;
	printf("%s\n", ft_strcpy(dest, src));

	n++;
}
