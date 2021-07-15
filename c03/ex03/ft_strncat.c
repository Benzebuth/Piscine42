/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:41:34 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/15 15:10:03 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	strlen;

	i = 0;
	strlen = ft_strlen(dest);
	while ((i + strlen) < nb)
	{
		dest[strlen + i] = src[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[12] = "hello";
	char	src[12] = "bien?";
	unsigned int n = 7;
	char	*stock;

	stock = ft_strncat(dest, src, n);
	printf("%s$", stock);
	printf("\n");

//original
	char	dest1[12] = "hello";
	char	src1[12] = "bien?";
	unsigned int n1 = 10;
	char	*stock1;

	stock1 = strncat(dest1, src1, n1);
	printf("ori:%s", stock1);
}*/
