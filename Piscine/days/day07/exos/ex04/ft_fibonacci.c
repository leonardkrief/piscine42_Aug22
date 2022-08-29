/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 02:57:28 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/22 23:56:44 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 3) + 2 * ft_fibonacci(index - 2));
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int i;
	if (argc == 2)
		printf("%d", ft_fibonacci(atoi((argv[1]))));
}
