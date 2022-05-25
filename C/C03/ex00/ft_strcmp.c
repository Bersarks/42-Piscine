int	ft_strcmp(char *s1, char *s2)
{
	int	j;

	j = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 - *s2 > 0)
		{
			j = *s1 - *s2;
			return (j);
		}
		if (*s1 - *s2 < 0)
		{
			j = *s1 - *s2;
			return (j);
		}
		s1++;
		s2++;
	}
	return (0);
}
