#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	s;

	s = 'z';
	while (s >= 'a')
	{
		write(1, &s, 1);
		s--;
	}
}
