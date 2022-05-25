int	nonletter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i]) && (str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowercase(str);
	if (('a' <= str[i]) && (str[i] <= 'z'))
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (nonletter(str[i]) == 0)
		{
			if (('a' <= str[i + 1]) && (str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
