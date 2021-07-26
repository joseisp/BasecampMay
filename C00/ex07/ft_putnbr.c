/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- <jinacio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:34:46 by jinacio-          #+#    #+#             */
/*   Updated: 2021/06/10 17:34:58 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
