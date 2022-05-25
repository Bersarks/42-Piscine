#include <stdio.h>
int	ft_counter(char *str)
{
	unsigned int	a;

	a = 0;
	while (*str)
	{
		a++;
		str++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
		if (i == size)
			return (i + ft_counter(src));
	}
	if (dest[i] == '\0')
	{
		while (j < (size - i - 1) && src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	return (i + j);
}
