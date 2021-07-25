# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/25 14:13:36 by bcolin            #+#    #+#              #
#    Updated: 2021/07/25 17:15:56 by bcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

c.o.:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
		ar -crs $@ ${OBJS}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all	clean fclean re
