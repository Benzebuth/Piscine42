/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:52:21 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/15 18:04:21 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>//pas oublier

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}
/*
int main()
{
	char str[] = "ollololololol";
	printf("%d", ft_strlen(str));
}
*/
