/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:41:02 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/22 17:02:28 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	taille_nbr(int nb, char *base_to)
{
	int				taille;
	unsigned int	base;
	unsigned int	z;

	taille = 1;
	base = ft_strlen(base_to);
	z = -(nb < 0) * nb + (nb >= 0) * nb;
	if (nb < 0)
		taille++;
	while (z > base - 1)
	{
		z = z / base;
		taille++;
	}
	return (taille);
}

void	moins(char **str, int nb)
{
	if (nb < 0)
		(*str)[0] = '-';
}
