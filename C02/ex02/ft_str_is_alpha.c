int	ft_str_is_alpha(char *str)
{
	int	i;
	int	l;
	int	is_alpha;

	i = 0;
	while (str[i] != '\0')
	{
		l = str[i];
		if ((l >= 65 && l <= 90) || (l >= 97 && l <= 122))
		{
			is_alpha = 1;
		}
		else
		{
			is_alpha = 0;
			return (0);
		}
		i++;
	}
	return (1);
}
