/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:29:11 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/25 21:34:06 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"

int	ft_check_input(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_one_arg(char *str)
{	
	char		*lib;
	t_lib_en	*struct_tab;	

	if (!(ft_check_input(str)))
		return (0);
	else
	{
		lib = ft_create_lib();
		struct_tab = ft_create_tab_struct(lib);
		ft_comp(str, struct_tab);
		free(lib);
		free(struct_tab);
	}
	return (1);
}
