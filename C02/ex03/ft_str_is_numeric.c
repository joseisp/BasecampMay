int	ft_str_is_numeric(char *str)
{
	int	i;
	int	out;
	int	count;

	i = 0;
	while (str[i] != '\0')
	{
		count = str[i];
		if (count >= 48 && count <= 57)
		{
			out = 1;
		}
		else
		{
			out = 0;
			return (0);
		}
		i++;
	}
	return (1);
}
