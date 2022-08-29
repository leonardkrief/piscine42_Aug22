/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:05:51 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/25 18:27:03 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while ((i < length - 1) && (f(tab[i], tab[i + 1]) == 0))
		i++;
	if (i < length - 1)
		signe = -(f(tab[i], tab[i + 1]) < 0) + (f(tab[i], tab[i + 1]) > 0);
	while ((i < length - 1) && (signe * f(tab[i], tab[i + 1]) >= 0))
		i++;
	if (i >= length - 1)
		return (1);
	else
		return (0);
}
