/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:57:08 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/13 17:19:58 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_not_upper(char *str, int c)
{	
	if (str[c] >= 'a' && str[c] <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (ft_is_not_upper(str, c))
		{
			str[c] -= ' ';
		}
		c++;
	}
	return (str);
}
