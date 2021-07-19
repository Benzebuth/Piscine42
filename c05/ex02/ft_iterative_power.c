/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:12:35 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 15:29:08 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	t;
	int	c;

	t = nb;
	c = 1;
	while (c < power)
	{
		nb *= t;
		c++;
	}
	return (nb);
}
/*
int	main()
{
	printf("%d", ft_iterative_power(2, 5));
}
*/
