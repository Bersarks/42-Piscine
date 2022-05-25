int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (0);
	while (x <= nb / 2)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
