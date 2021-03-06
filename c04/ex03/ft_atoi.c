/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:33:46 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/29 15:39:18 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	negative;

	negative = 1;
	i = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * negative);
}
/*
int	main()
{
	char	str[] = " 		--+--483648a";
	char	str1[] = " 		----2147483647a";
	char	str2[] = " 		---2147234648a";
	char	str3[] = " 		--1245243648a";
	char	str4[] = " 		-214345348a";

	printf("%s\n", str);	
	printf("%s\n", str1);	
	printf("%s\n", str2);	
	printf("%s\n", str3);	
	printf("%s\n", str4);	

	printf("%d\n", ft_atoi(str));	
	printf("%d\n", ft_atoi(str1));	
	printf("%d\n", ft_atoi(str2));	
	printf("%d\n", ft_atoi(str3));	
	printf("%d\n", ft_atoi(str4));	
}
*/
