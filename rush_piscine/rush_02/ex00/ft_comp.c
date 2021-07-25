/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srituit <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:22:13 by srituit           #+#    #+#             */
/*   Updated: 2021/07/25 19:16:41 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_base.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_unit(char *str, t_lib_en *s_lib)
{
	int	i;

	i = 0;
	while (s_lib[i].id[0] != str[0])
		i++;
	if (s_lib[i].id[0] == str[0])
		ft_putstr(s_lib[i].value);
}

void	ft_comp(char *str, t_lib_en *s_lib)
{
	int		strlen;

	strlen = ft_strlen(str);
}
