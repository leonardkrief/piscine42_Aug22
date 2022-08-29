/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:06:38 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/28 22:19:54 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

//Cette fonction ajoute un element de type *dict au debut de begin et renvoie
//un pointeur sur le debut de la liste.
t_dict	*ft_push(t_dict *begin, t_dict *elem)
{
	if (elem->nbr == NULL)
		return (begin);
	if (begin != NULL)
		elem->next = begin;
	return (elem);
}

//Cette fonction ajoute un element de type *dict dans begin de sorte que begin
//reste triee suivant le parametre nbr. Ca renvoie un pointeur sur le debut de
//la liste.
t_dict	*ft_insert(t_dict *begin, t_dict *elem)
{
	t_dict	*tmp;
	t_dict	*prec;

	tmp = begin;
	if (tmp == NULL)
		return (elem);
	while (tmp && ft_strcmp(elem->nbr, tmp->nbr) < 0)
	{
		prec = tmp;
		tmp = tmp->next;
	}
	if (tmp && ft_strcmp(tmp->nbr, elem->nbr) == 0)
		return (NULL);
	else if (prec == NULL)
	{
		elem->next = tmp;
		begin = elem;
	}
	else
	{
		prec->next = elem;
		elem->next = tmp;
	}
	return (begin);
}

//free un dictionnaire dans son entierete.
void	free_dict(t_dict *begin)
{
	t_dict	*tmp;

	while (begin)
	{
		tmp = begin->next;
		if (begin->nbr)
			free(begin->nbr);
		if (begin->letters)
			free(begin->letters);
		free(begin);
		begin = tmp;
	}
}

//affiche un dictionnaire
void	print_dict(t_dict *begin)
{
	while (begin)
	{
		if (begin->nbr)
		{	
			ft_putstr(begin->nbr);
			write(1, "\n", 1);
		}
		else
			write(1, "no nbr\n", 7);
		if (begin->letters)
		{
			ft_putstr(begin->letters);
			write(1, "\n", 1);
		}
		else
			write(1, "no letters\n", 11);
		begin = begin->next;
	}
}
