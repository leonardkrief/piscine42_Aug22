/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:33:21 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 17:58:28 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_print_hex(int n);

int	main(void)
{
	int		size = 200;
	// char	moulin[size] = "\\14}\\9e\\c5\\ee\\e4l;\\b6&\\de\\ec\\ec\\05R\\f2";
	char	str[400];
	int		i = 1;
	unsigned char	c;

	str[0] = 'q';
	while(i < 400)
	{
		str[i] = i;
		c = str[i];
	//	printf("signed = %d, unsigned = %d,  char = %c\n", i, c, i);
		i++;
	}
	ft_putstr_non_printable(str);
	//ft_print_hex(100);
}
