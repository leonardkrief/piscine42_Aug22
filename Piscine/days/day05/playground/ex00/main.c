/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 04:00:57 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/16 10:51:33 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "i";
	char	s2[] = "";
	
	printf("Real = %d\n",  strcmp(s1, s2));
	printf("Mine = %d", ft_strcmp(s1, s2));
}
