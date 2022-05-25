int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	if (nb > 0)
	{
		while (a * a <= nb)
		{
			if (a * a == nb)
				return (a);
			else if (a >= 46341)
				return (0);
			a++;
		}
	}
	return (0);
}
