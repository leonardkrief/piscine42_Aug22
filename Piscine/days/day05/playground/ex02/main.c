/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 04:00:57 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 04:57:44 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[] = "01234567";
	char	s2[22] = "4567890123";
	char	s3[] = "01234567";
	char	s4[22] = "4567890123";	
	
	printf("Real = %s\n",  strcat(s2, s1));
	printf("Mine = %s", ft_strcat(s4, s3));
}
