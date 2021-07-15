/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:08:38 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/15 18:18:18 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		write(1, (str + c), 1);
		c++;
	}
}
/*
int	main()
{
	char str[] = "coucou ca va ?";
	ft_putstr(str);
}
*/
