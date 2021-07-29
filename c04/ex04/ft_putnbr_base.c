/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:41:06 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/29 17:17:56 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb_u;
	unsigned int	size;

	size = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nb_u = (unsigned int)nbr * -1;
	}
	else
	{
		nb_u = (unsigned int)nbr;
	}
	if (nb_u >= size)
	{
		ft_putnbr_base((nb_u / size), base);
		ft_putnbr_base((nb_u % size), base);
	}
	else
		ft_putchar(base[nb_u]);
}
/*
int	main(void)
{
	ft_putnbr_base(350, "0123456789abcdef");
}
*/
