/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:06:04 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 19:24:40 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c < nb)
	{
		if ((nb % c) == 0)
			return (0);
		else
			c++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d : 0\n", ft_is_prime(0));
	printf("%d : 1\n", ft_is_prime(1));
	printf("%d : 2\n", ft_is_prime(2));
	printf("%d : 4\n", ft_is_prime(4));
	printf("%d : 7\n", ft_is_prime(7));
	printf("%d : 9\n", ft_is_prime(9));
	printf("%d : 11\n", ft_is_prime(11));
	printf("%d : 13\n", ft_is_prime(13));
	printf("%d : 21\n", ft_is_prime(21));
	printf("%d : 23\n", ft_is_prime(23));
}
*/
