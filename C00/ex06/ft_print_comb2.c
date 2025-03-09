/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:04:58 by giti              #+#    #+#             */
/*   Updated: 2025/03/05 17:18:15 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnumber(int nb)
{
	char	c;

	if (nb > 9)
		ft_putnumber(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n;
	int	m;

	n = 0;
	while (n <= 98)
	{
		m = n + 1;
		while (m <= 99)
		{
			if (n < 10)
				write(1, "0", 1);
			ft_putnumber(n);
			write(1, " ", 1);
			if (m < 10)
				write(1, "0", 1);
			ft_putnumber(m);
			if (!(n == 98 && m == 99))
				write(1, ", ", 2);
			m++;
		}
		n++;
	}
}
/*
int main()
{
	ft_print_comb2();
}*/
