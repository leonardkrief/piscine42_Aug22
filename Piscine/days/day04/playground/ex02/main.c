/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:25:38 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 03:15:28 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[100]="ibgihiohhuHGIUGIjo09U";
	printf("%d", ft_str_is_alpha(str));
}
