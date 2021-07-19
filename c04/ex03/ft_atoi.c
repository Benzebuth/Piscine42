/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:33:46 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 16:28:41 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_minus(char **ptr)
{	
	int	s;

	s = 1;
	while (**ptr == '-' || **ptr == '+')
	{
		if (**ptr == '-')
			s *= -1;
		(*ptr)++;
	}
	return (s);
}

void	ft_is_space(char **ptr)
{
	while (**ptr == ' ' || (**ptr >= 9 && **ptr <= 13))
		(*ptr)++;
}

int	ft_is_numeric(char **ptr)
{
	int	c;
	int	r;

	r = 0;
	c = 0;
	while (**ptr >= '0' && **ptr <= '9')
	{
		r = (r * 10) + (**ptr - '0');
		(*ptr)++;
		c++;
	}
	return (r);
}

int	ft_atoi(char *str)
{
	int		i;
	int		mc;
	char	*ptr;
	int		r;

	i = 0;
	ptr = str;
	r = 0;
	mc = 1;
	while (*(str + i) != '\0')
	{
		ft_is_space(&ptr);
		mc = ft_minus(&ptr);
		r = ft_is_numeric(&ptr);
		if (r == -2147483648 && mc == 1)
			return (2147483647);
		else if (r)
			return (r * mc);
		i++;
	}
	return (r * mc);
}

int	main()
{
	char	str[] = " 		--+--483648a";
	char	str1[] = " 		+----2147483648a";
	char	str2[] = " 		---2147234648a";
	char	str3[] = " 		-1245243648a";
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

