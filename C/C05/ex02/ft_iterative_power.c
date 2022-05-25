int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			a *= nb;
			power--;
		}
	}
	return (a);
}
