/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:56:08 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/10 21:36:34 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int line, int column, int x, int y)
{
	if (line == 0)
	{
		if (column == 0 || column == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else if (line == y - 1)
	{
		if (column == 0 || column == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (column == 0 || column == x - 1)
			ft_putchar('|');
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
