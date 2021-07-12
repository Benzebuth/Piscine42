/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:16:49 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/12 22:47:22 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>//delete

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
	int	nbr;

	nbr = ft_count(src);
	c = 0;
	while(c < n)
	{
		if(c < nbr)
			*(dest + c) = *(src + c);
		else
			*(dest + c) = 'X';
		c++;
	}
	return (dest);
}

int main()
{
	char dest[10];
	unsigned int n = 10;
	char src[] = "hello";

	ft_strncpy(dest, src, n);
	int c = 0;

	printf("%s\n", dest);
	printf("%d", ft_count(dest));
	return 0;
}
