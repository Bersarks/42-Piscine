void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	x;

	x = 0;
	while (x <= (size - 1))
	{
		temp = tab[x];
		tab[x] = tab[size - 1];
		tab[size - 1] = temp;
		x++;
		size--;
	}
}
