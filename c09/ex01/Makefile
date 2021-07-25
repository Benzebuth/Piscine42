# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/25 14:13:36 by bcolin            #+#    #+#              #
#    Updated: 2021/07/25 23:34:45 by bcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= $(addprefix srcs/, ${SRCS:.c=.o})

NAME	= libft.a

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
