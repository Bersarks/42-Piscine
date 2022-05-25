#include <stdlib.h>

int	ft_length(char *str)
{
	int	a;

	a = 0;
	while (*str++)
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		x;

	x = 0;
	tab = malloc (sizeof(*tab) * ft_length(src) + 1);
	if (tab == NULL)
		return (NULL);
	while (src[x] != '\0')
	{
		tab[x] = src[x];
		x++;
	}
	tab[x] = '\0';
	return (tab);
}
