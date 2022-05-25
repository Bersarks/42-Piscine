#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str)
	{
		a = a + 1;
		str++;
	}
	return (a);
}
