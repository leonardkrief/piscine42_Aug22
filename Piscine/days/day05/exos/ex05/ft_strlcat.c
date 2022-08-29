/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 05:21:58 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/16 16:06:18 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] && d < size)
		d++;
	while (src[s] && (d + s < size - 1))
	{
		dest[d + s] = src[s];
		s++;
	}
	if (src[s] != '\0' && d + s < size)
	{	
		dest[d + s] = src[s];
		return (size);
	}
	else
	{
		dest[d + s] = '\0';
		return (d + s);
	}
}
