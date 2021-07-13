/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:32:25 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/13 16:39:07 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_not_upper(char *str, int c)
{
	if (str[c] < 'A' || str[c] > 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_is_not_upper(str, c))
			return (0);
		c++;
	}
	return (1);
}
