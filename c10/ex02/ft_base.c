#include "ft_base.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

char	*ft_strdup(char *str)
{
	int		size;
	char	*res;
	char	*send;

	size = ft_strlen(str) + 1;
	res = malloc(sizeof(char) * size);
	if (res == NULL)
		return ((void *) 0);
	send = res;
	while (*str != '\0')
	{
		*res = *str;
		res++;
		str++;
	}
	*res = '\0';
	return (send);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size_dest;
	int	count;

	count = 0;
	size_dest = ft_strlen(dest);
	while (src[count] != '\0')
	{
		dest[size_dest + count] = src[count];
		count ++;
	}
	dest[size_dest + count] = '\0';
	return (dest);
}
