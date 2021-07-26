int	ft_str_is_lowercase(char *str)
{
	int	a;
	int	count;
	int	flash;

	count = 0;
	while (str[count] != '\0')
	{
		a = str[count];
		if (a >= 97 && a <= 122)
		{
			flash = 1;
		}
		else
		{
			flash = 0;
			return (0);
		}
		count++;
	}
	return (1);
}
