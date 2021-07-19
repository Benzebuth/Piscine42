/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:09:13 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 18:28:01 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	r;

	r = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (r = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main()
{
	printf("fibonacci of %d is %d\n", -3125, ft_fibonacci(-3125));
    printf("fibonacci of %d is %d\n", 0, ft_fibonacci(0));
    printf("fibonacci of %d is %d\n", 1, ft_fibonacci(1));
    printf("fibonacci of %d is %d\n", 2, ft_fibonacci(2));
    printf("fibonacci of %d is %d\n", 3, ft_fibonacci(3));
    printf("fibonacci of %d is %d\n", 15, ft_fibonacci(15));
    printf("fibonacci of %d is %d\n", 7, ft_fibonacci(7));
}
*/
