/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:55:59 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 17:13:10 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[100] = "QQ.f;frf;ff;f;f;f;;f;fffff455fr;ff;ff;";

	int	i;

	i = 0;
	ft_strcapitalize(str);
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
}
