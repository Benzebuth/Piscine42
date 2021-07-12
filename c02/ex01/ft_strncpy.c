/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:16:49 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/13 00:02:09 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count(char *str)
{
	int	nbr;

	nbr = 0;
	while (str[nbr] != '\0')
	{
		nbr++;
	}
	return (nbr);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;
	int				nbr;

	nbr = ft_count(src);
	c = 0;
	while (c < n)
	{
		if (c < nbr)
			*(dest + c) = *(src + c);
		else
			*(dest + c) = '\0';
		c++;
	}
	return (dest);
}
