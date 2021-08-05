#include "ft_base.h"
#define BUFFSIZE 4098

void	ft_read_fd(int fd);

int	ft_create_fd(char *av)
{
	int	fd;

	fd = open(av, O_RDONLY);
	if (fd < 0)
		return (0);
	else
	{
		ft_read_fd(fd);
	}
	return (1);
}

void	ft_read_fd(int fd)
{
	char	buf[BUFFSIZE];
	int	read_return;

	while (1)
	{
		read_return = read(fd, buf, BUFFSIZE);
		if (read_return < 1)
			break ;
		buf[read_return + 1] = '\0';
		write(1, buf, read_return);
	}
}

int	ft_main_read(char *av)
{
	int	fd;

	fd = ft_create_fd(av);
	if (fd <= 0)
		return (0);
	return (1);
}
