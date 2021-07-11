/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 23:28:28 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/12 00:38:37 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	t;
	int	test;
	int	c;

	test = 1;
	while (test)
	{
		c = 1;
		test = 0;
		while (c < size)
		{
			if (tab[c - 1] > tab[c])
			{
				t = tab[c];
				tab[c] = tab[c - 1];
				tab[c - 1] = t;
				test = 1;
			}
			c++;
		}
	}
}
