/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:41:18 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/27 16:52:35 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_base.h"

void	ft_strlen(char *str)
{
	while (*str)
		write(1, str++, 1);
}
