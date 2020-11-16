# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etaranti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 16:12:03 by etaranti          #+#    #+#              #
#    Updated: 2020/11/12 16:22:39 by etaranti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c utilities.c operations.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	=  do-op

.c.o :
	${CC} ${CFLAGS} -c ${SRCS}

all :	${OBJS}
		${CC} -o ${NAME} ${OBJS}

${NAME} :	all

clean :
		rm -f ${OBJS}

fclean : clean
		 	rm -f ${NAME}

re :	 fclean all

.PHONY: fclean clean re all
