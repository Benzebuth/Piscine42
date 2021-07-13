/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:51:38 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/13 16:09:48 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnot_numeric(char *str, int c)
{
	if (str[c] < '0' || str[c] > '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_isnot_numeric(str, c))
			return (0);
		c++;
	}
	return (1);
}
