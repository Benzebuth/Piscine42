/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:26:40 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/15 23:55:35 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*(s1 + i) != '\0' || *(s2 + i) != '\0') && i < n)
	{
		if (! (*(s1 + i) == *(s2 + i)))
			return (*(s1 + i) - *(s2 + i));
		i++;
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
