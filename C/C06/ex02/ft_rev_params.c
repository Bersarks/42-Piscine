#include <unistd.h>

int	main(int arc, char **arg)
{	
	int	a;

	a = arc - 1;
	while (a >= 1)
	{
		while (*arg[a])
			write(1, &*arg[a]++, 1);
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
