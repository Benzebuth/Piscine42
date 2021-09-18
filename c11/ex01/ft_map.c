#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
		int dest[10];
		int i;
		int tmp;

		i = 0;
		while (i < length)
		{
			tmp = f(tab[i]);
			dest[i] = tmp;
			i++;
		}

	return (dest);
}

int		ft_double(int i)
{
	i *= 2;
	return (i);
}

#include <stdio.h>
int		main(void)
{
	int tab[] = {5, 3, 2, 4, 1};

	int *recu;

	recu = ft_map(tab, 5, &ft_double);

	int stop = 0;
	while (stop < 5)
	{
		printf("%d\n", recu[stop]);
		stop++;
	}
}
