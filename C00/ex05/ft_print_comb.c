/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinacio- <jinacio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:23:25 by jinacio-          #+#    #+#             */
/*   Updated: 2021/06/10 17:33:04 by jinacio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7' || y != '8' || z != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 <= '9')
	{
		n2 = n1 + 1;
		while (n2 <= '9')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				print (n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
