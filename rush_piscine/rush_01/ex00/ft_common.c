/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:10:17 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/17 18:37:09 by hsabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c , 1);
}

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(str++);
}

int	ft_atoi(char *str)
{
	int	res;
	int i;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}	

    return res;
}
