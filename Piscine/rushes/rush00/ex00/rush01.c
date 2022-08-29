/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cypoiny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:22:52 by cypoiny           #+#    #+#             */
/*   Updated: 2022/08/14 12:14:19 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int len, char a, char b, char c)
{
	int	n;

	n = 1;
	if (len > 0)
	{
		ft_putchar(a);
		if (len > 1)
		{
			while (n < len - 1)
			{
				ft_putchar(b);
				n++;
			}
			ft_putchar(c);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	n;

	n = 1;
	if (y > 0)
	{
		ft_print_line(x, '/', '*', '\\');
		if (y > 1)
		{
			while (n < y - 1)
			{
				ft_print_line(x, '*', ' ', '*');
				n++;
			}
			ft_print_line(x, '\\', '*', '/');
		}
	}
}
