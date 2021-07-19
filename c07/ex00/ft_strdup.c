/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:18:35 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 23:52:10 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		c;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	c = 0;
	while (c < len)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
/*
int	main()
{
	printf("%s", ft_strdup("coucoutest"));
}
*/
