#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combi(int a, int b)
{
	ft_putchar(48 + (a / 10));
	ft_putchar(48 + (a % 10));
	ft_putchar(' ');
	ft_putchar(48 + (b / 10));
	ft_putchar(48 + (b % 10));
	if (a < 98 )
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_combi(a, b);
			b++;
		}
		a++;
	}
}
