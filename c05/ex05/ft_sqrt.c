/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:41:25 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 19:01:48 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	c;

	c = 1;
	while (c < 46341)
	{
		if (nb % c == 0 && ((c * c) == nb))
			return (c);
		c++;
	}
	return (0);
}
/*
int	main()
{
	printf("sqrt of %d is %d\n", -4042, ft_sqrt(-4042));
    printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
    printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
    printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
    printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
    printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
    printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
    printf("sqrt of %d is %d\n", 35952016, ft_sqrt(35952016));
    printf("sqrt of %d is %d\n", 2035431737, ft_sqrt(2035431737));
    printf("sqrt of %d is %d\n", 45091225, ft_sqrt(45091225));
    printf("sqrt of %d is %d\n", 1839828803, ft_sqrt(1839828803));
    printf("sqrt of %d is %d\n", 12645136, ft_sqrt(12645136));
    printf("sqrt of %d is %d\n", 748993060, ft_sqrt(748993060));
    printf("sqrt of %d is %d\n", 509991889, ft_sqrt(509991889));
    printf("sqrt of %d is %d\n", 68825150, ft_sqrt(68825150));
    printf("sqrt of %d is %d\n", 237129201, ft_sqrt(237129201));
    printf("sqrt of %d is %d\n", 105771407, ft_sqrt(105771407));
}
*/
