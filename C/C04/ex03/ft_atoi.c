int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	res;

	i = 0;
	x = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x = -x;
		if (str[i + 1] == 32 && (str[i + 1] >= 9 && str[i + 1] <= 13))
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (x * res);
}
