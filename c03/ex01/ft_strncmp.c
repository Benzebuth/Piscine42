/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:26:40 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/16 13:21:47 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((*(s1 + c) != '\0' || *(s2 + c) != '\0') && c < n)
	{
		if (! (*(s1 + c) == *(s2 + c)))
			return (*(s1 + c) - *(s2 + c));
		c++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "aesa";
	char s2[] = "tesb";
	printf("%d", ft_strncmp(s1, s2, 4));
}
*/
