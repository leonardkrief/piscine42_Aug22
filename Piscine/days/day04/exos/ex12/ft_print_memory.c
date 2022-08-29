/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:54:43 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/16 16:16:10 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_print_small_hex(int n)
//{
//	char	c;
//
//	c = ('0' + n) * (1 - n / 10) + ('a' + n - 10) * (n / 10);
//	write(1, &c, 1);
//}
//
//void	ft_print_hex(long unsigned int n, int nb_octets)
//{
//	if (n < 256 && nb_octets < 2)
//	{
//		ft_print_small_hex((n / 16) % 16);
//		ft_print_small_hex(n % 16);
//	}
//	else
//	{
//		ft_print_hex(n / 256, nb_octets - 1);
//		ft_print_small_hex((n / 16) % 16);
//		ft_print_small_hex(n % 16);
//	}
//}
void	ft_print_hex(long unsigned int n, int nb_octets)
{
	int	d;
	int	m;
	int	a;
	int	b;

	d = (n / 16) % 16;
	m = n % 16;
	a = ('0' + d) * (1 - d / 10) + ('a' + d - 10) * (d / 10);
	b = ('0' + m) * (1 - m / 10) + ('a' + m - 10) * (m / 10);
	if (n < 256 && nb_octets < 2)
	{
		write(1, &a, 1);
		write(1, &b, 1);
	}
	else
	{
		ft_print_hex(n / 256, nb_octets - 1);
		write(1, &a, 1);
		write(1, &b, 1);
	}
}

void	ft_print_address(void *addr)
{
	long unsigned int	int_address;

	int_address = (intptr_t) addr;
	ft_print_hex(int_address, 8);
	write(1, ": ", 2);
}

void	ft_putstr_part(unsigned char *str, unsigned int nb)
{
	unsigned int	i;
	unsigned char	c;

	i = 0;
	while (i < nb)
	{
		c = *str;
		if (c > 31 && c < 127)
			write(1, &c, 1);
		else
			write(1, ".", 1);
		str++;
		i++;
	}
	write(1, "\n", 1);
}

void	ft_aux(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	cpt;
	unsigned char	*copie;

	copie = addr;
	i = 0;
	while (i < size)
	{
		cpt = 0;
		ft_print_address(copie + i);
		while (cpt < 16 && i < size)
		{				
			ft_print_hex(copie[i], 1);
			if (i % 2)
				write(1, " ", 1);
			i++;
			cpt++;
		}
		while (i % 16)
		{
			write(1, "   ", 2 + (i % 2));
			i++;
		}
		ft_putstr_part(copie + i - 16, cpt);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size > 0)
	{
		ft_aux(addr, size);
	}
	return (addr);
}
