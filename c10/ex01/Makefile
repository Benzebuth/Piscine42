SRCS 	= main.c

OBJ 	= ${SRCS:.c=.o}

CC 		= gcc

CFLAGS 	= -Wall -Wextra -Werror

RM 		= rm -f

NAME 	= ft_cat


all : ${NAME}

%.o : %.c
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : 	${OBJ}
				${CC} ${CFLAGS} ${SRCS} -o $@

clean :
				${RM} ${OBJ}

fclean : 	clean
				${RM} ${NAME}

re : 		fclean all


.PHONY : all clean fclean re
