#include "ft_base.h"

int	main(int ac, char **av)
{
	int	exec;

	if (ac == 2)
	{
		exec = ft_main_read(av[1]);
		if (exec <= 0)
		{
			ft_strlen("Cannot read file.\n");
            		return (1);
		}
	}
	else if (ac < 2)
	{
		ft_strlen("File name missing.\n");
	}
	else if (ac > 2)
	{	
		ft_strlen("Too many arguments.\n");
	}
	else
	{
		ft_strlen("Cannot read file.\n");
	}
	return (0);
}
