/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:24:18 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/29 17:49:14 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, int *res)
{
	unsigned int	nb_u;
	unsigned int	size;

	size = ft_strlen(base);
	if (nbr < 0)
	{
		nb_u = (unsigned int)nbr * -1;
	}
	else
	{
		nb_u = (unsigned int)nbr;
	}
	if (nb_u >= size)
	{
		ft_putnbr_base((nb_u / size), base, res);
		ft_putnbr_base((nb_u % size), base, res);
	}
	else
		*res += (base[nb_u]) - '0';
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	negative;

	negative = 1;
	i = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	ft_putnbr_base(res, base, &res);
	return (res * negative);
}
/*
int	main(void)
{
	int	recu;

	recu = ft_atoi_base("350", "01");
	printf("result;%d\n", recu);
}
*/
