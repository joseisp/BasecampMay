#include	<unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	vector[10];
	int		count;

	if (nb == 0)
		print('0');
	if (nb < 0)
	{
		nb = nb * -1;
		print('-');
	}
	if (nb == -2147483648)
		write(1, "2147483648", 10);
	count = 0;
	while (nb > 0)
	{
		vector[count] = (nb % 10) + '0';
		nb = nb / 10;
		count++;
	}
	while (--count >= 0)
	{
		print(vector[count]);
	}
}
