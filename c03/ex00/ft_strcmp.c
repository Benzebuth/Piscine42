/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:38:11 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/14 14:46:15 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;
	int	test;
	int	ret;

	test = 1;
	c = 0;
	while (s1[c] != '\0' && test == 1)
	{
		if (s1[c] != s2[c])
			test = 0;
		else
			c++;
	}
	ret = s1[c] - s2[c];
	return (ret);
}
