/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:02:51 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/10 21:30:23 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int line, int column, int x_max, int y_max)
{
	if (line == 0)
	{
		if (column == 0)
			ft_putchar('/');
		else if (column == x_max - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (line == y_max - 1)
	{
		if (column == 0)
			ft_putchar('\\');
		else if (column == x_max - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (column == 0 || column == x_max - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	ft_negative(int *x, int *y)
{
	if (*x < 0)
		*x = *x * -1;
	if (*y < 0)
		*y = *y * -1;
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	ft_negative(&x, &y);
	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			ft_print(line, column, x, y);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}
