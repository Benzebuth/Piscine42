/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:51:23 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/10 22:20:22 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	u_nbr;

	if (nb < 0)
	{
		u_nbr = (unsigned int)(nb * -1);
		write(1, "-", 1);
	}
	else
		u_nbr = (unsigned int)nb;
	if (u_nbr >= 10)
	{
		ft_putnbr(u_nbr / 10);
		ft_putnbr(u_nbr % 10);
	}
	else
	{
		ft_print(u_nbr + '0');
	}
}
