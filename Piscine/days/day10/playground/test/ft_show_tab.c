/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:20:41 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/24 13:22:47 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int n)
{
	char			c;
	unsigned int	z;

	z = -(n < 0) * n + (n >= 0) * n;
	c = '0' + z % 10;
	if (n < 0)
		write(1, "-", 1);
	if (z < 10)
		write(1, &c, 1);
	else
	{
		ft_putnbr(z / 10);
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;

	if (argc > 1)
	{
		tab = ft_strs_to_tab(argc - 1, argv + 1);
		ft_show_tab(tab);
	}
}
