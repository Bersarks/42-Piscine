unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (src[x])
	{
		x++;
	}
	while ((i < size - 1) && src[i] && size != 0)
	{
		dest[i] = src [i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (x);
}
