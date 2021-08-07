#include "ft_base.h"
#define BUFFSIZE 4098

void ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != 0)
		write(1, &str[i], 1);
}

int ft_read_fd(char *file)
{
	int fd;
	int return_read;
	char buf[BUFFSIZE];

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr(strerror(errno));
		return (1);
	}
	while (1)
	{
		return_read = read(fd, buf,BUFFSIZE);
		if (return_read <= 0)
			break ;
		write(1, buf, return_read);
	}
	close(fd);
	return (0);
}


int ft_load(char *file)
{
	int fd;

	fd = ft_read_fd(file);
	if (fd < 0)
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	int status;

	if (ac >= 2)
	{
		status = ft_load(av[1]);
		if (status < 0)
			ft_putstr(strerror(errno));
	}
	else
	{
		ft_putstr("Need arguments lol");
	}
	return (0);
}
