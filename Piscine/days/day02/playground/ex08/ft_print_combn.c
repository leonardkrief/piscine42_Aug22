/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:05:45 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/29 20:37:54 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_aux(char r, char *str, int i, int n)
{
	if (i == n && r <= '9')
	{
		str[i - 1] = r;
		str[i] = '\0';
		ft_putstr(str);
		if (str[0] != '0' + 10 - n)
			write(1, ", ", 2);
	}
	else if (i < n)
	{
		if (i > 0)
			str[i - 1] = r;
		while (r++ <= '8')
			ft_aux(r, str, i + 1, n);
	}
}

void	ft_print_combn(int n)
{
	char	str[11];

	if (n >= 1 && n <= 9)
		ft_aux('0' - 1, str, 0, n);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_combn(atoi(argv[1]));
}*/
