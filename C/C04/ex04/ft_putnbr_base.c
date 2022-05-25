#include <unistd.h>

void	ft_putnbr_base_rec(int nbr, char *base, unsigned int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= size)
	{
		ft_putnbr_base_rec(n / size, base, size);
	}
	a = base[n % size];
	write(1, &a, 1);
}

int	ft_check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1]
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	s;

	s = 0;
	if (ft_check_base(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}
