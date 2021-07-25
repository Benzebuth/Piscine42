# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/25 21:34:48 by bcolin            #+#    #+#              #
#    Updated: 2021/07/25 22:25:14 by bcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_base.c ft_comp.c ft_dict.c ft_lib.c

OBJ		= ${SRCS:.c=.o}

NAME	= rush-02

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJ}
			${CC} -o $@ ${OBJ} 

all:	${NAME}

clean:
			${RM} *.o

fclean:	clean
			${RM} ${NAME}

.PHONY:	clean fclean
