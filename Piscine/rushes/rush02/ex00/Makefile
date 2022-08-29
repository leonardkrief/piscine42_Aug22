# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrief <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 04:02:06 by lkrief            #+#    #+#              #
#    Updated: 2022/08/28 23:37:34 by lkrief           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT	= all

SRCS 	= $(wildcard srcs/*.c)
OBJS		= ${SRCS:.c=.o}
HDRS		= -I includes/
NAME		= rush-02
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

${NAME}:
		${CC} ${CFLAGS} ${SRCS} ${HDRS} -o ${NAME}

all:	${NAME}

fclean:
		${RM} ${NAME}

clean:	fclean

re:		fclean all

.PHONY: all clean fclean re
