/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 13:59:46 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/08 23:30:49 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	count_num1(void)
{
	char	d1;
	char	d2;

	d1 = 0;
	d2 = 1;
	while (d1 < 99)
	{
		ft_print(d1 / 10 + '0');
		ft_print(d1 % 10 + '0' );
		ft_print(' ');
		ft_print(d2 / 10 + '0');
		ft_print(d2 % 10 + '0');
		if (d1 < 98)
		{
			write(1, ", ", 2);
		}
		if (++d2 > 99)
		{
			d2 = ++d1 + 1;
		}
	}
}

void	ft_print_comb2(void)
{
	count_num1();
}
