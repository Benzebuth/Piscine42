/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:19:28 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/13 16:29:51 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_not_lower(char *str, int c)
{
	if (str[c] < 'a' || str[c] > 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_is_not_lower(str, c))
			return (0);
		c++;
	}
	return (1);
}
