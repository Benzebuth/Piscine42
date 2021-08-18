SRCS = main.c ft_base.c

OBJS = ${SRCS:.c=.o}

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = ft_tail


all : ${NAME}

%.o : %.c
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		${CC} ${CFLAGS} -o $@ ${OBJS}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : 	fclean all

f : fclean all clean

.PHONY : all clean fclean re
