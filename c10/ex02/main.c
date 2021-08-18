#include "ft_base.h"
#define BUFFSIZE 4098

char	*resize_str(char *str, int size)
{
	char	*tampon;

	tampon = ft_strdup(str);
	if (str != NULL)
		free(str);
	str = malloc(sizeof(char) * size);
	str = ft_strcpy(str, tampon);
	free(tampon);
	return (str);
}

char	*ft_read_and_stock(int fd)
{
	char	buf[BUFFSIZE + 1];
	char	*result;
	int		size;
	int		read_return;

	size = 1;
	result = malloc(sizeof(char) * 1);
	while (1)
	{
		read_return = read(fd, buf, BUFFSIZE);
		if (read_return < 1)
			break ;
		buf[read_return] = 0;
		size += read_return;
		result = resize_str(result, size);
		result = ft_strcat(result, buf);
	}
	return (result);
}

void	ft_print(char *str)
{
	ft_putstr(str);
}

void	ft_send_basic_path(char *path)
{
	int		fd;
	char	*result;

	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("error at open");
	}
	else
	{
		result = ft_read_and_stock(fd);
		ft_print(result);
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 0;
		while (++i < ac)
		{
//			if (ft_is_c_option(av[i]))
//			{
//				ft_search_c_num(av[i]);
//			}
//			else
//			{
				ft_send_basic_path(av[i]);
//			}
		}
	}
}
