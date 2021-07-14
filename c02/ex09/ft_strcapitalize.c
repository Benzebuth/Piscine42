/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:49:14 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/14 17:09:48 by bcolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char *str, int c)
{
	if (str[c] >= '0' && str[c] <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_letter(char *str, int c)
{
	if (str[c] >= 'A' && str[c] <= 'Z')
		return (1);
	else if (str[c] >= 'a' && str[c] <= 'z')
		return (1);
	else
		return (0);
}

int	ft_is_lower(char *str, int c)
{
	if (str[c] >= 'a' && str[c] <= 'z')
		return (1);
	else
		return (0);
}

void	ft_upper_it(char *str, int c, int *fl)
{
	str[c] -= ' ';
	*fl = 0;
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	fl;

	c = 0;
	fl = 1;
	while (str[c] != '\0')
	{
		if (ft_is_letter(str, c))
		{
			if (fl == 1)
			{
				if (ft_is_lower(str, c))
					ft_upper_it(str, c, &fl);
				else
					fl = 0;
			}
		}
		else if (ft_is_numeric(str, c))
			fl = 0;
		else
			fl = 1;
		c++;
	}
	return (str);
}
