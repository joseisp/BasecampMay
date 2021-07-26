int	ft_iterative_factorial (int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
		return (1);
	while (nb > 1)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}
