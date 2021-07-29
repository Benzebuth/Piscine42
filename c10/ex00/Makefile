# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 16:50:33 by bcolin            #+#    #+#              #
#    Updated: 2021/07/27 16:54:42 by bcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_base.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I includes

all:		${NAME}

c.o.:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -crs ${NAME} ${OBJS}


clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all	clean fclean re
