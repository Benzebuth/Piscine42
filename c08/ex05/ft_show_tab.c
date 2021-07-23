/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:38:19 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/23 21:40:21 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putunbr(int nb)
{
	unsigned int	unb;

	if (nb < 0)
	{
		ft_putchar('-');
		unb = (unsigned int)nb * -1;
	}
	else
		unb = (unsigned int)nb;
	if (unb > 9)
	{
		ft_putunbr(unb / 10);
		ft_putunbr(unb % 10);
	}
	else
	{
		unb += '0';
		ft_putchar(unb);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putunbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
