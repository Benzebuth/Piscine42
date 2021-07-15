/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:10:47 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/15 20:48:00 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	unsigned int	un;

	if (nb < 0)
	{
		write(1, "-", 1);
		un = (unsigned int)(nb * -1);
	}
	else
		un = (unsigned int)nb;
	if (un > 9)
	{
		ft_putnbr(un / 10);
		ft_putnbr(un % 10);
	}
	else
		ft_print(un + '0');
}
/*
int	main()
{
	int a = 2147483647;
	ft_putnbr(a);
}
*/
