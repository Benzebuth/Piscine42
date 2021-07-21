/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 23:56:21 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/21 17:07:44 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	r;
	int	c;

	r = (max - min);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(r * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = min;
	c = 0;
	while (i < max)
	{
		(*range)[c] = min++;
		i++;
		c++;
	}
	return (r);
}
/*
int	main()
{
	int *ptr;

	printf("recu:%d\n", ft_ultimate_range(&ptr, 5, -1));
	printf("cible:%d\n", *ptr+2);
}
*/
