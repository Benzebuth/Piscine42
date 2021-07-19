/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:03:11 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 18:06:14 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main()
{
	printf("%d ^ %d = %d\n", 2816, -3753, ft_recursive_power(2816, -3753));
    printf("%d ^ %d = %d\n", 0, 0, ft_recursive_power(0, 0));
    printf("%d ^ %d = %d\n", -3552, 0, ft_recursive_power(-3552, 0));
    printf("%d ^ %d = %d\n", -2547, 1, ft_recursive_power(-2547, 1));
    printf("%d ^ %d = %d\n", 0, 2, ft_recursive_power(0, 2));
    printf("%d ^ %d = %d\n", 7, 3, ft_recursive_power(7, 3));
    printf("%d ^ %d = %d\n", 8, 5, ft_recursive_power(8, 5));
    printf("%d ^ %d = %d\n", -1, 6, ft_recursive_power(-1, 6));
    printf("%d ^ %d = %d\n", -8, 7, ft_recursive_power(-8, 7));
    printf("%d ^ %d = %d\n", -6, 9, ft_recursive_power(-6, 9));
    printf("%d ^ %d = %d\n", -2, 10, ft_recursive_power(-2, 10));
}
*/
