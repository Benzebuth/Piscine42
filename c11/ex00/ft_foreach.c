
void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int count;

	count = 0;
	while (count < length)
	{
		f(tab[count]);
		count++;
	}
}

#include <unistd.h>
void	ft_putnbr(int i)
{
	i += 48;
	write(1, &i, 1);
}

int	main()
{
	int tab[] = {4, 2, 5, 1, 3};
	ft_foreach(tab, 5, &ft_putnbr);
}
