/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:43:08 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/13 21:29:18 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				c;
	unsigned int	strlen;

	c = 0;
	while (src[c++] != '\0')
		strlen++;
	c = 0;
	while (c < size - 1)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (strlen);
}
