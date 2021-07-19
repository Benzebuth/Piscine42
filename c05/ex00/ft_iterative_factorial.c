/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:53:48 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 16:33:42 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	c;

	c = nb -1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (c > 1)
	{
		nb *= c;
		c--;
	}
	return nb;
}
/*
int	main()
{
	printf("Factorial %d = %d\n", -92, ft_iterative_factorial(-92));
    printf("Factorial %d = %d\n", 0, ft_iterative_factorial(0));
    printf("Factorial %d = %d\n", 1, ft_iterative_factorial(1));
    printf("Factorial %d = %d\n", 2, ft_iterative_factorial(2));
    printf("Factorial %d = %d\n", 12, ft_iterative_factorial(12));
    printf("Factorial %d = %d\n", 3, ft_iterative_factorial(3));
    printf("Factorial %d = %d\n", 4, ft_iterative_factorial(4));
    printf("Factorial %d = %d\n", 5, ft_iterative_factorial(5));
    printf("Factorial %d = %d\n", 7, ft_iterative_factorial(7));
    printf("Factorial %d = %d\n", 8, ft_iterative_factorial(8));
    printf("Factorial %d = %d\n", 9, ft_iterative_factorial(9));
    printf("Factorial %d = %d\n", 10, ft_iterative_factorial(10));
    printf("Factorial %d = %d\n", 11, ft_iterative_factorial(11));
}
*/
