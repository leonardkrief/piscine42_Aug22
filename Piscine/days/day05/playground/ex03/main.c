/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 04:00:57 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 05:05:29 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[] = "01234567";
	char	s2[22] = "4567890123";
	char	s3[] = "01234567";
	char	s4[22] = "4567890123";	
	int		n = 1;
	printf("Real = %s\n",  strncat(s2, s1, n));
	printf("Mine = %s", ft_strncat(s4, s3, n));
}
