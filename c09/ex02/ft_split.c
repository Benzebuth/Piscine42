/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:44:32 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/29 14:17:29 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_is_charset(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int	ft_nb_word(char *str, char *sep)
{
	int	i;
	int	count_word;

	i = -1;
	count_word = 1;
	while (str[++i])
	{
		if (ft_is_charset(str[i], sep))
		{
			count_word++;
			while (ft_is_charset(str[i], sep))
				i++;
		}
	}
	return (count_word);
}

char	*ft_strdup(int offset, char *str, int i)
{
	char	*tab;
	int		j;
	int		pos;

	pos = i - offset;
	tab = malloc((offset + 1) * sizeof(char));
	j = 0;
	while (pos < i)
	{
		tab[j] = str[pos];
		pos++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		nb_word;
	int		i;
	int		offset;

	nb_word = ft_nb_word(str, charset);
	dest = (char **)malloc(sizeof(char *) * (nb_word + 1));
	i = -1;
	offset = 0;
	while (str[++i] != '\0')
	{
		if (ft_is_charset(str[i], charset))
		{
			*dest = ft_strdup(offset, str, i);
			dest++;
			while (ft_is_charset(str[i], charset))
				i++;
			offset = 0;
		}
		offset++;
	}
	*dest = ft_strdup(offset, str, i);
	*++dest = 0;
	return (dest - nb_word);
}
/*
int	main()
{
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split("coucou://acava:bien", ":/");
	while (tab[i])
	{
		printf("index :%d resu:%s\n",i, tab[i]);
		i++;
	}	
}
*/
