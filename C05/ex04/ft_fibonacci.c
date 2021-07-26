int	ft_fibonacci (int index)
{
	int	last;

	last = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		last = ft_fibonacci (index - 1) + ft_fibonacci (index - 2);
	return (last);
}
