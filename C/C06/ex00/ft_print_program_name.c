#include <unistd.h>

int	main(int arc, char **argv)
{
	while (*argv[arc - 1])
		write(1, &*argv[arc - 1]++, 1);
	write(1, "\n", 1);
	return (0);
}
