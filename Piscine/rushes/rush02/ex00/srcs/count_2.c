/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:45:49 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/28 22:58:49 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

//Compte le nombre de lignes dans le fichier deja ouvert fd
//Probleme si le fichier contient + de 2 * INT_MAX - 1 lignes
unsigned int	nb_lines(char *file)
{
	unsigned int	nbr;
	int				fd;
	char			buf[2];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	nbr = 0;
	while (read(fd, buf, 1))
	{
		if (*buf == '\n')
			nbr++;
	}
	if (close(fd) == -1)
		return (0);
	return (nbr);
}

//Genere un tableau d'int qui contient autant de cases que la valeur de lines
//Chaque case contient nb de caracteres de la ligne no i de file
//len en argument est purement artificiel pour avoir 25 lignes dans la fonction
//on utilisera toujours avec len = 0 !
//Probleme si le fichier contient une ligne de + de 2 * MAX_INT - 1 caracteres
//Probleme si malloc rate car lines trop grand. Corrigeable en generant
//une liste chainee plutot qu'un tableau.
unsigned int	*len_lines(char *file, unsigned int lines)
{
	unsigned int	*tab;
	int				fd;

	tab = malloc(sizeof(*tab) * lines);
	if (!tab)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		free(tab);
		return (NULL);
	}
	tab = len_lines_2(fd, tab);
	return (tab);
}

unsigned int	*len_lines_2(int fd, unsigned int *tab)
{
	unsigned int		len;
	int					i;
	char				buf[2];

	i = 0;
	len = 0;
	while (read(fd, buf, 1))
	{
		if (*buf != '\n')
			len++;
		else
		{
			tab[i++] = ++len;
			len = 0;
		}
	}
	if (close(fd) == -1)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}

//En considerant qu'on part juste apres le ':' d'une ligne, cette fonction sort
//la taille de la chaine letters qu'on devra malloc.
int	ft_letters_count(char *buf)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (buf[i])
	{
		while ((buf[i] >= 9 && buf[i] <= 13) || buf[i] == ' ')
			i++;
		while (buf[i] && !((buf[i] >= 9 && buf[i] <= 13) || buf[i] == ' '))
		{
			len++;
			i++;
		}
		len++;
	}
	return (len);
}

//En considerant qu'on part juste apres le ':' d'une ligne, cette fonction
//initialise le parametre letters du elem passe en argument.
t_dict	*ft_letters(t_dict *elem, char *buf)
{
	int	i;
	int	s;
	int	len;

	i = 0;
	s = 0;
	len = ft_letters_count(buf);
	if (len <= 1)
		return (NULL);
	elem->letters = malloc(sizeof(*(elem->letters)) * len);
	if (!(elem->letters))
		return (NULL);
	while (buf[i])
	{
		while ((buf[i] >= 9 && buf[i] <= 13) || buf[i] == ' ')
			i++;
		while (buf[i] && !((buf[i] >= 9 && buf[i] <= 13) || buf[i] == ' '))
			(elem->letters)[s++] = buf[i++];
		if (s < len - 2)
			(elem->letters)[s++] = ' ';
	}
	(elem->letters)[s] = '\0';
	elem->next = NULL;
	return (elem);
}
