/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:58:10 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/23 00:15:00 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*montab;
	t_stock_str	mastruct;

	montab = malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	while (i < ac)
	{
		mastruct.size = ft_strlen(av[i]);
		mastruct.str = av[i];
		mastruct.copy = ft_strdup(av[i]);
		montab[i] = mastruct;
		i++;
	}
	montab[i].size = 0;
	montab[i].str = 0;
	montab[i].copy = 0;
	return (montab);
}

int main(int ac, char **av)
{
	t_stock_str *ici;

	ici = ft_strs_to_tab(ac - 1, av + 1);
	ft_show_tab(ici);
}

