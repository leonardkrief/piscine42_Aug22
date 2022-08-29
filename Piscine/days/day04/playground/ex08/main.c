/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:55:59 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/13 20:53:45 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	str[100] = "QWERTYUIHViAAZZ NK$%^&*(OUYD*(*^&)(_+)Gfhgjgydfujg";
	int	i = 0;
	ft_strlowcase(str);
	while(str[i])
	{
		printf("%c", str[i]);
		i++;
	}
}
