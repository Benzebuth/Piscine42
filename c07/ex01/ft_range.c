/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 23:25:19 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/20 14:53:46 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = (int *)malloc(sizeof(int) * (max - min));
	if (!*tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int	main()
{	
	int i;
	int *stock;

	stock = ft_range(5, 15);
	i = 0;
	while (i < 10)
	{
		printf("%d", stock[i++]);
	}
}
*/
