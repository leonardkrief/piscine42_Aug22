/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:55:59 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 03:25:40 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[10] = "jhdGYY787";
	int	i = 0;
	ft_strupcase(str);
	while(str[i])
	{
		printf("%c", str[i]);
		i++;
	}
}
