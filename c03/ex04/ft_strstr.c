/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:13:40 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/15 22:16:41 by bcolin           ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c++ < n && *s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	strlen;
	unsigned int	findlen;
	unsigned int	c;

	c = 0;
	findlen = ft_strlen(to_find);
	strlen = ft_strlen(str);
	if (! to_find)
		return (str);
	while ((strlen - c) >= findlen)
	{
		if (! ft_strncmp(str + c, to_find, findlen))
			return (str + c);
		c++;
	}
	return ((void *)0);
}
/*
int	main()
{
	char str[] = "bonjour bomment ca va ?";
	char find[] = "ca";
	char *stock;
	int i = 0;

	stock = ft_strstr(str, find);
	printf("%s", stock);
	printf("\n");
	
	while (i < 7)
		printf("%x ", stock[i++]);

	printf("\n");
// original
	char str1[] = "bonjour bomment ca va ?";
	char find1[] = "ca";
	char *stock1;
	
	stock1 = strstr(str1, find1);
	printf("ori:%s\n", stock1);
	
	i = 0;
	while (i < 7)
		printf("%x ", stock1[i++]);
}
*/
