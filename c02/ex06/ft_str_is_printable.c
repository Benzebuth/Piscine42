/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:40:48 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/13 16:54:35 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_not_print(char *str, int c)
{
	if (str[c] < ' ')
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_is_not_print(str, c))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
