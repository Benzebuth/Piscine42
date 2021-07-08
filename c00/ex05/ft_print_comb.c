/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 13:02:59 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/08 13:51:57 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_3char(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7' || d != '8' || u != '9')
	{	
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{	
			u = d + 1;
			while (u <= '9')
			{
				ft_3char(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
