/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:29:23 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 19:40:32 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ops.h"

int	f_plus(int a, int b)
{
	return (a + b);
}

int	f_moins(int a, int b)
{
	return (a - b);
}

int	f_fois(int a, int b)
{
	return (a * b);
}

int	f_div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		return (a / b);
}

int	f_mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		return (a % b);
}
