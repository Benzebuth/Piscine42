#include "ft_base.h"
#define BUFFSIZE 4098

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		write(1, &str[i], 1);
}

void	ft_print_err(char *str, char *bin, char *strerror)
{
	ft_putstr(bin);
	ft_putstr(": ");
	ft_putstr(str);
	ft_putstr(": ");
	ft_putstr(strerror);
	ft_putstr("\n");
}

int	ft_read_fd(char *file, char *bin)
{
	int		fd;
	int		return_read;
	char	buf[BUFFSIZE];

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_print_err(file, bin, strerror(errno));
		return (1);
	}
	while (1)
	{
		return_read = read(fd, buf, BUFFSIZE);
		if (return_read <= 0)
			break ;
		write(1, buf, return_read);
	}
	close(fd);
	return (0);
}

int	ft_load(char *file, char *bin)
{
	int	fd;

	fd = ft_read_fd(file, bin);
	if (fd < 0)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int		status;
	int		i;
	char	*bin;

	bin = basename(av[0]);
	if (ac >= 2)
	{
		i = 1;
		while (i < ac)
		{
			status = ft_load(av[i], bin);
			if (status < 0)
				ft_print_err(av[i], bin, strerror(errno));
			i++;
		}
	}
	else
	{
		ft_putstr("Need arguments");
	}
	return (0);
}
