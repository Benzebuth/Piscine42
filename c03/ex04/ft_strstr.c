/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcolin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:13:40 by bcolin            #+#    #+#             */
/*   Updated: 2021/07/15 17:46:12 by bcolin           ###   ########.fr       */
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

unsigned int	ft_is_found(unsigned int findlen, unsigned int cptr)
{
	if (cptr == (findlen - 1))
		return (1);
	return (0);
}

void	ft_init(unsigned int *c, unsigned int *cptr)
{
	*c = 0;
	*cptr = 0;
}

void	ft_end(unsigned int *cptr, unsigned int *c)
{
	*cptr = 0;
	*c = *c + 1;
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	strlen;
	unsigned int	findlen;
	unsigned int	c;
	unsigned int	cptr;
	char			*ptrf;

	findlen = ft_strlen(to_find);
	strlen = ft_strlen(str);
	ft_init(&c, &cptr);
	while (c < strlen)
	{
		if (str[c] == to_find[cptr])
		{
			ptrf = &str[c];
			while (cptr < findlen && *str)
			{
				if (str[c + cptr] == to_find[cptr])
					if (ft_is_found(findlen, cptr))
						return (ptrf);
				cptr++;
			}	
		}
		ft_end(&cptr, &c);
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
