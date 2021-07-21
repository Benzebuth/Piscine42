/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:55:05 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/21 14:01:49 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_tablen(char **str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != NULL)
	{
		c += ft_strlen(str[i]);
		i++;
	}
	return (c);
}

int	ft_strlen(char *str)
{
	int	j;
	int	c;

	j = 0;
	c = 0;
	while (str[j])
	{
		c++;
		j++;
	}
	return (c);
}

void	ft_add_sep(int *c, char *sep, char *dest)
{
	int	i;

	i = 0;
	while (i < ft_strlen(sep))
	{
		dest[*c] = sep[i];
		i++;
		(*c)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strlen;
	char	*dest;
	int		i;
	int		j;
	int		c;

	if (size < 1)
		return (dest = malloc(sizeof(char)));
	strlen = ft_tablen(strs) + (size - 1) * ft_strlen(sep);
	dest = malloc(strlen * sizeof(char));
	i = 0;
	c = 0;
	while (c < strlen)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
			dest[c++] = strs[i][j++];
		if (i < (size - 1))
			ft_add_sep(&c, sep, dest);
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char *sep = "=>";
	printf("dest:%s", ft_strjoin(argc, argv, sep));
}
*/
