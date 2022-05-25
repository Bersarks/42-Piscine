#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		x;

	dest = malloc(sizeof(strs));
	i = 0;
	j = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x] != '\0')
			dest[j++] = strs[i][x++];
		x = 0;
		while (i != size - 1 && sep[x] != '\0')
			dest[j++] = sep[x++];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
