# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/23 21:49:34 by bcolin            #+#    #+#              #
#    Updated: 2021/07/25 14:05:24 by bcolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/sh
gcc -Wall -Werror -Wextra -c *.c
ar -crs libft.a *.o
