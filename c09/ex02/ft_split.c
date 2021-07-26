/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:36:44 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/26 23:26:47 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_strcpy(char *str, int offset, int i, char **tab)
{
	int	diff;
	int	c;

	c = 0;
	diff = i - offset;
	while (diff < i)
	{
		tab[0][c] = str[diff];
		diff++;
		c++;
	}
	tab[0][c] = '\0';
}

char	*ft_create_tab(int *offset, int i, char *str, int *dc)
{
	char		*tab;

	tab = malloc(1 + *offset * sizeof(char));
	ft_strcpy(str, *offset, i, &tab);
	*dc += 1;
	*offset = 0;
	return (tab);
}

char	**ft_split(char	*str, char *charset)
{
	char	**dest;
	int		offset;
	int		i;
	int		check;
	int		dc;

	dest = malloc(sizeof(char *) * ft_strlen(str) + 1);
	dc = -1;
	offset = 0;
	i = 0;
	while (str[i])
	{	
		check = -1;
		while (check++ < ft_strlen(charset))
		{
			if (str[i] == charset[check])
				dest[dc] = ft_create_tab(&offset, i, str, &dc);
			while (str[i] == charset[check])
				i++;
		}
		i++;
		offset++;
	}
	dest[dc] = ft_create_tab(&offset, i, str, &dc);
	return (dest);
}

int	main(void)
{
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split("coucou:::sal)usdatb:ien", ":)");
	while (tab[i])
	{
		printf("resu:%s\n", tab[i]);
		i++;
	}
}
