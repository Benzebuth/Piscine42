/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:13:26 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/08 12:37:44 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_number(void)
{
	int	number;

	number = '0';
	while (number <= '9')
	{	
		write(1, &number, 1);
		number++;
	}
}
