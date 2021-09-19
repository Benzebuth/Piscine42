#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
		int *dest;
		int i;
		int tmp;

		dest = malloc(sizeof(int) * length);
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

int		ft_minus_one(int i)
{
	return (i - 1);
}

#include <stdio.h>
int		main(void)
{
	int tab[] = {5, 3, 2, 4, 1};

	int *recu;

	recu = ft_map(tab, 5, &ft_minus_one);

	int stop = 0;
	while (stop < 5)
	{
		printf("%d\n", recu[stop]);
		stop++;
	}
}
