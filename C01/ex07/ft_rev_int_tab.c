void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		i++;
		size--;
	}
}
