/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_dict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:45:49 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/28 22:30:45 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

t_dict	*gen_dict(char *file, t_dict *begin, int nbr, int i)
{
	unsigned int		*lens;
	int					fd;

	nbr = nb_lines(file);
	lens = len_lines(file, nbr);
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		free(lens);
		return (NULL);
	}
	while (++i < nbr)
	{	
		begin = gen_dict_1(lens, fd, i, begin);
		if (begin == NULL && lens[i] != 1)
			return (NULL);
	}
	free(lens);
	if (close(fd) == -1)
	{
		free_dict(begin);
		return (NULL);
	}
	return (begin);
}

t_dict	*gen_dict_1(unsigned int *lens, int fd, int i, t_dict *begin)
{
	char	*buf;

	if (lens[i])
	{
		buf = malloc(sizeof(*buf) * (lens[i] + 1));
		buf[lens[i]] = '\0';
		if (!buf)
		{
			free_dict(begin);
			free(lens);
			return (NULL);
		}
		if (!read(fd, buf, lens[i]))
		{
			free_dict(begin);
			free(lens);
			free(buf);
			return (NULL);
		}
		else
			begin = gen_dict_2(buf, lens, begin);
	}
	return (begin);
}

t_dict	*gen_dict_2(char *buf, unsigned int *lens, t_dict *begin)
{
	t_dict	*check;
	t_dict	*tmp;

	tmp = ft_create(buf);
	free(buf);
	if (!tmp)
	{
		free_dict(begin);
		free(lens);
		return (NULL);
	}
	if (!tmp->nbr)
		return (begin);
	check = ft_insert(begin, tmp);
	if (check == NULL)
	{
		free_dict(begin);
		free(lens);
		return (NULL);
	}
	return (check);
}
