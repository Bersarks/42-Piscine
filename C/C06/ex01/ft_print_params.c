#include <unistd.h>

int	main(int arc, char **argv)
{
	int	a;

	a = 1;
	if (arc > 1)
	{
		while (a < arc)
		{
			while (*argv[a])
				write(1, &*argv[a]++, 1);
			write(1, "\n", 1);
			a++;
		}
	}
	return (0);
}
