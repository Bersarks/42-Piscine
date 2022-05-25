#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	while (n < 0)
	{
		a = 'N';
		write(1, &a, 1);
		break ;
	}
	while (n >= 0)
	{
		a = 'P';
		write(1, &a, 1);
		break ;
	}
}
