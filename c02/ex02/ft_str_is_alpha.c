/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 00:04:28 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/13 13:09:58 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upper(char *str, int c)
{
	if (str[c] >= 'A' && str[c] <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_is_lower(char *str, int c)
{
	if (str[c] >= 'a' && str[c] <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	c;
	int	r;

	r = 1;
	c = 0;
	while (str[c] != '\0')
	{
		if (ft_is_upper(str, c) || ft_is_lower(str, c))
			r = 1;
		else
		{
			return (0);
		}
		c++;
	}
	return (r);
}
