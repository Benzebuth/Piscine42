/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:02:51 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/10 14:21:15 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_print(int line, int column, int x_max, int y_max)
{
	if (line == 1)
	{
		if (column == 1)
			ft_putchar('/');
		else if (column == x_max)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (line == y_max)
	{
		if (column == 1)
			ft_putchar('\\');
		else if (column == x_max)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (column == 1 || column == x_max)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int column;

	line = 1;
	while(line <= y)
	{
		column = 1;
		while(column <= x)
		{
			ft_print(line, column, x, y);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}

}
