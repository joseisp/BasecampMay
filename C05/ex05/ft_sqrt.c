int	ft_sqrt (int nb)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (aux != nb)
	{
		if (i <= 46340)
		{
			aux = i * i;
			i++;
		}
		else
		{
			return (0);
		}
	}
	if (i == 0)
	{
		return (i);
	}
	else
	{
		return (i - 1);
	}
}
