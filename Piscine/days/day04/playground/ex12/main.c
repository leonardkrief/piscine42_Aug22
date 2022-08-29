/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:54:43 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 21:20:15 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);
void	ft_print_address(void *addr);
void	ft_print_hex(long unsigned int n, int nb_octets);

/*int main()
{
    char tab[] = "bonjour";
    ft_print_memory((void *)tab, 1000);
    return (0);
}
*/

int	main(void)
{
	char	test[] = "Il n'y a pas de probleme, il   y a un\tpro \nbl\n\neme";
	char	str[400];
	unsigned char c;
	int	i;

	// j = (intptr_t) str;
	// printf("%ld", j);
	// ft_print_address(str);
	ft_print_memory(str, 400);
	// ft_print_hex(n, 3);
	// ft_print_hex(8240000000, 4);
	
	// ft_print_hex(1024 * 1024,1);
}
