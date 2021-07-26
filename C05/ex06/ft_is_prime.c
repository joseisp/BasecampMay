int	ft_is_prime (int nb)
{
	int	count;
	int	number;

	if (nb == 2)
		return (1);
	else if (nb < 2 || nb % 2 == 0)
		return (0);
	count = 2;
	number = nb / 2;
	while (count < number)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}
