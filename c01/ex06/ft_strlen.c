/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:07:36 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/11 18:49:18 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;
	int	result;

	count = 0;
	result = 0;
	while (*(str + count) != '\0')
	{
		count++;
		result++;
	}
	printf("%d\n", result);
	return (result);
}
