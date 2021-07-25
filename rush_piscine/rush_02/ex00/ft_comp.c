/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srituit <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:22:13 by srituit           #+#    #+#             */
/*   Updated: 2021/07/25 21:34:09 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"

void	ft_print(int i, t_lib_en *s_lib)
{
	ft_putstr(s_lib[i].value);
}

void	ft_mod0(int strlen, char *str, t_lib_en *s_lib)
{
	int	i;

	if (strlen > 2)
	{
		i = 0;
		while (s_lib[i].id[0] != str[0])
			i++;
		ft_print(i, s_lib);
	}
}

void	ft_comp(char *str, t_lib_en *s_lib)
{
	int		strlen;

	strlen = ft_strlen(str);
	if (strlen % 3 == 0)
	{
		ft_mod0(strlen, str, s_lib);
	}
	else if (strlen % 3 == 1)
	{
	}
	else if (strlen % 3 == 2)
	{
	}
	else if (strlen % 3 == 3)
	{
	}
}
