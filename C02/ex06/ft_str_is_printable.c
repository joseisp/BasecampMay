int	ft_str_is_printable(char *str)
{
	int	a;
	int	count;
	int	flash;

	count = 0;
	while (str[count] != '\0')
	{
		a = str[count];
		if (a >= 32 && a <= 127)
		{
			flash = 1;
		}
		else
		{
			return (0);
		}
		count++;
	}
	return (1);
}
