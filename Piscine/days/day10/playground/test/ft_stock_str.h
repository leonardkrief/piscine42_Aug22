/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:20:41 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/23 17:22:43 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TABS_H
# define FT_TABS_H

#include <stdlib.h>
#include <unistd.h>

typedef struct	s_stock_str
{
	int	size;
	char	*str;
	char	*copy;
}	t_stock_str;

int		ft_strlen(char *str);
struct 	s_stock_str *ft_strs_to_tab(int ac, char **av);
int		ft_strlen(char *str);
void		ft_putstr(char *str);
void		ft_putnbr(int n);
void		ft_show_tab(struct s_stock_str *par);

#endif
