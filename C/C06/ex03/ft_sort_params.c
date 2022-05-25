#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort(char *tab[], int size)
{
	int			a;
	int			b;
	char		*temp;

	a = 1;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (ft_strcmp(tab[a], tab[b]) > 0)
			{
				temp = tab[a];
				tab[a] = tab[b];
				tab[b] = temp;
			}
			b++;
		}
		a++;
	}
}

int	main(int arc, char **arg)
{
	int	x;

	x = 1;
	if (arc > 0)
	{
		ft_sort(arg, arc);
		while (x < arc)
		{
			while (*arg[x])
				write(1, &*arg[x]++, 1);
			write(1, "\n", 1);
			x++;
		}
	}
	return (0);
}
