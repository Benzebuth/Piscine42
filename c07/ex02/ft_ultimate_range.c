/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 23:56:21 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/20 00:54:58 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	r;
//	int	c = 0;

	r = (max - min);
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return ((int)NULL);
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}	
/*
	c = 0;
	while (c < (max - min))
	{
		printf("%d\n", tab[c]);
		c++;
	}
*/
	return (r);
}
/*
int	main()
{
	int *ptr;
	int range;

	range = 10;
	ptr = &range;
	printf("recu:%d\n", ft_ultimate_range(&ptr, 5, 15));
}
*/
