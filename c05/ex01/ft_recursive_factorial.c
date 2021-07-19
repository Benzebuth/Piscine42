/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 13:55:59 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 16:33:20 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main()
{
	printf("Factorial %d = %d\n", -100, ft_recursive_factorial(-100));
    printf("Factorial %d = %d\n", 0, ft_recursive_factorial(0));
    printf("Factorial %d = %d\n", 1, ft_recursive_factorial(1));
    printf("Factorial %d = %d\n", 2, ft_recursive_factorial(2));
    printf("Factorial %d = %d\n", 12, ft_recursive_factorial(12));
    printf("Factorial %d = %d\n", 3, ft_recursive_factorial(3));
    printf("Factorial %d = %d\n", 4, ft_recursive_factorial(4));
    printf("Factorial %d = %d\n", 5, ft_recursive_factorial(5));
    printf("Factorial %d = %d\n", 6, ft_recursive_factorial(6));
    printf("Factorial %d = %d\n", 7, ft_recursive_factorial(7));
    printf("Factorial %d = %d\n", 8, ft_recursive_factorial(8));
    printf("Factorial %d = %d\n", 9, ft_recursive_factorial(9));
    printf("Factorial %d = %d\n", 10, ft_recursive_factorial(10));
}
*/
