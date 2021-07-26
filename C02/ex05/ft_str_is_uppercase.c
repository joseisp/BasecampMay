int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	count;
	int	flash;

	count = 0;
	while (str[count] != '\0')
	{
		a = str[count];
		if (a >= 65 && a <= 90)
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
