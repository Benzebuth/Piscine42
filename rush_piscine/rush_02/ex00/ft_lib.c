/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:53:36 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/25 00:12:50 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_base.h"
#define BUFFSIZE 424242

char	*ft_create_lib(void)
{
	int		lib;
	char	buf[BUFFSIZE];
	int		tr;
	int		i;
	char	*malib;

	lib = open("numbers.dict", O_RDONLY);
	tr = read(lib, buf, BUFFSIZE);
	malib = malloc((tr + 1) * sizeof(char));
	if (malib == NULL)
		return (0);
	i = 0;
	while (i < tr)
	{
		malib[i] = buf[i];
		i++;
	}
	malib[i] = '\0';
	return (malib);
}

int	ft_s_tab(char *lib)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (lib[i] != '\0')
	{
		if (lib[i] == ':')
		{
			c++;
		}
		i++;
	}
	return (c);
}

char	*ft_parse_id(char *lib, int *gi)
{
	int	c;
	char *tab;
	int	offset;	
	int	i;

	c = 0;
	while (lib[*gi] < '0' || lib[*gi] > '9')
		*gi += 1;
	while (lib[*gi] != ':')
	{
		*gi += 1;
		c++;
	}
	tab = malloc((c + 1) * sizeof(char));
	offset = *gi - c;
	i = 0;
	while (offset < *gi)
	{
		tab[i] = lib[offset];
		offset++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct s_lib_en	*ft_create_tab_struct(char *lib)
{
	int	s_tab;
	int	i;
	t_lib_en	*final_struct;
	t_lib_en	temp_struct;
	int	gi;

	s_tab = ft_s_tab(lib);
	final_struct = malloc(s_tab * sizeof(t_lib_en));
	i = 0;
	gi = 0;
	while (i < s_tab)
	{
		temp_struct.id = ft_parse_id(lib, &gi);
		temp_struct.value = ft_parse_value(lib, &gi);
		final_struct[i] = temp_struct;
	}
	return (final_struct);
}
