/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:54:43 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/15 18:00:07 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(int n)
{
	int	q;
	int	r;

	q = n / 16;
	r = n % 16;
	ft_putchar(('0' + q) * (1 - q / 10) + ('a' + q - 10) * (q / 10));
	ft_putchar(('0' + r) * (1 - r / 10) + ('a' + r - 10) * (r / 10));
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;

	while (*str)
	{
		c = *str;
		if (c > 31 && c < 127)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_print_hex(c);
		}
		str++;
	}
}
