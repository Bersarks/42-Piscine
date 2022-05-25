#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	x;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	x = max - min;
	*range = malloc(sizeof(int) * x);
	if (*range == NULL)
		return (-1);
	while (i < x)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (x);
}
