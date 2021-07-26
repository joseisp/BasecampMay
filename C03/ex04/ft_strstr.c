int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	to_find_len;

	i = 0;
	j = 0;
	to_find_len = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (j == to_find_len)
				return (str + (i - j) + 1);
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (0);
}
