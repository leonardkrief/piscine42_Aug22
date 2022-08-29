/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 04:00:57 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/16 19:28:01 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[200];
	char	s2[200];
	int		n;
	int		i = 40;

	n = -100;
	while(i < 180)
	{
		s1[i] = i;
		s2[i + 1] = i;
		i++;
	}

	printf("Real = %d\n",  strncmp(s1, s2, n));
	printf("Mine = %d\n", ft_strncmp(s1, s2, n));
	while(i < 180)
	{
		s1[i] = i;
		s2[i] = i;
		printf("%c", s1[i]);
		i++;
	}
}
