/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:33:46 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/19 13:17:49 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>//

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
	while (*(str + i) != '\0')
	{
		ft_is_space(&ptr);
		mc = ft_minus(&ptr);
		r = ft_is_numeric(&ptr);
		if (r)
			return (r * mc);
		i++;
	}
	return (r * mc);
}
/*
int	main()
{
	char	str[] = " 		-0";
	int		recu;

	recu = ft_atoi(str);
	printf("%d", recu);	
}
*/
