/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:12:35 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 19:26:35 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	t;
	int	c;

	t = nb;
	c = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
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
	printf("%d ^ %d = %d\n", -801, -569, ft_iterative_power(-801, -569));
    printf("%d ^ %d = %d\n", 0, 0, ft_iterative_power(0, 0));
    printf("%d ^ %d = %d\n", 2454, 0, ft_iterative_power(2454, 0));
    printf("%d ^ %d = %d\n", 1206, 1, ft_iterative_power(1206, 1));
    printf("%d ^ %d = %d\n", 0, 2, ft_iterative_power(0, 2));
    printf("%d ^ %d = %d\n", 2, 4, ft_iterative_power(2, 4));
    printf("%d ^ %d = %d\n", 4, 5, ft_iterative_power(4, 5));
    printf("%d ^ %d = %d\n", 6, 6, ft_iterative_power(6, 6));
    printf("%d ^ %d = %d\n", -5, 7, ft_iterative_power(-5, 7));
    printf("%d ^ %d = %d\n", -4, 9, ft_iterative_power(-4, 9));
    printf("%d ^ %d = %d\n", -3, 10, ft_iterative_power(-3, 10));
}
*/
