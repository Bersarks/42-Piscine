#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	arr = (int *)malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
