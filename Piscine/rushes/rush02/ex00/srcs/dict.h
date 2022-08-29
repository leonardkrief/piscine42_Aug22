/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:46:35 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/28 22:54:54 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct dictionnaire
{	
	struct dictionnaire	*next;
	char				*nbr;
	char				*letters;
}t_dict;

//count.c
unsigned int	nb_lines(char *file);
unsigned int	*len_lines(char *file, unsigned int lines);
unsigned int	*len_lines_2(int fd, unsigned int *tab);
int				ft_letters_count(char *buf);
t_dict			*ft_letters(t_dict *elem, char *buf);

//count_2.c
t_dict			*ft_create(char *buf);
int				ft_create_2(t_dict *elem, char *buf);
int				valid_atoi_int(char *buf);

//ft_dict.c
t_dict			*ft_insert(t_dict *begin, t_dict *elem);
t_dict			*ft_push(t_dict *begin, t_dict *elem);
void			free_dict(t_dict *begin);
void			print_dict(t_dict *begin);

//ft_str.c
void			ft_putstr(char	*str);
int				ft_strlen(char *str);
int				ft_strcmp(char	*s1, char *s2);

//dict_gen.c
t_dict			*gen_dict(char *file, t_dict *begin, int nbr, int i);
t_dict			*gen_dict_1(unsigned int *lens, int fd, int i, t_dict *begin);
t_dict			*gen_dict_2(char *buf, unsigned int *lens, t_dict *begin);

//nb_algo.c
void			affichage_nb(char *nb, int groupe, t_dict *table, int surplus);
void			initialisation_affichage(char *nb, t_dict *table);
char			*gref(char *inter, char a, char b, char c);
int				encore_chiffre(char *nb, int i);
int				verification_zero(char *nb, t_dict *table);

//nb_annexe.c
char			*itoa(int n);
int				power(int n);
char			*equivalence(char *c, t_dict *table);
char			*generator(int n);

//nb_print.c
void			print_groupe(char *inter, int groupe, t_dict *table, char *nb);
void			print_rang(int groupe, t_dict *table, char *nb);
void			print_unite(char *inter, t_dict *table);
void			print_dizaine(char *inter, t_dict *table);
void			print_centaine(char *inter, t_dict *table);

//nb_annexe2.c
int				quezero(char *nb);
int				key_found(t_dict *table, t_dict *tab_file);

#endif
