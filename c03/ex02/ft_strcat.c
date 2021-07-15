/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 22:00:40 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/15 13:35:48 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>//delete
unsigned int	ft_strlen(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	strlen;
	unsigned int	i;

	i = 0;
	strlen = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[strlen + i] = src[i];
		i++;
	}
	dest[strlen + i] = '\0';
	return (dest);
}
