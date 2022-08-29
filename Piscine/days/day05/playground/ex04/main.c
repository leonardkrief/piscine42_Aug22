/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 04:00:57 by lkrief            #+#    #+#             */
/*   Updated: 2022/08/16 12:54:53 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char	*ft_strstr(char *src, char *to_find);

int	main(int argc, char **argv)
{	
	int		i;
	char	s2[] = "574kfei";
	char	s1[] = "ei";
	
	printf("Real = %s\n",  strstr(s2, s1));
	printf("Mine = %s\n", ft_strstr(s2, s1));

	/*i = 0;
	printf("argc = %i\n", argc);
	while(i < argc)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		i++;
	}
	if (argc > 2)
	{
		printf("Real = %s\n",     strstr(argv[1], argv[2]));
		printf("%s\n%s\n", argv[1], argv[2]);
		printf("Mine = %s\n",  ft_strstr(argv[1], argv[2]));
	}*/
}
