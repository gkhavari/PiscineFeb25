/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:06:28 by giti              #+#    #+#             */
/*   Updated: 2025/03/05 17:06:49 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_calc_limit(int power)
{
	int	limit;

	limit = 0;
	while (power > 0)
	{
		limit = limit * 10 + (10 - power);
		power--;
	}
	return (limit);
}

void	ft_write_zeros(int numb, int n)
{
	int	numb_digits;

	numb_digits = 0;
	if (numb == 0)
		numb_digits++;
	while (numb > 0)
	{
		numb = numb / 10;
		numb_digits++;
	}
	while (numb_digits < n)
	{
		write(1, "0", 1);
		numb_digits++;
	}
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	check_digits(int number, int digit_limit)
{
	int	numb_digits;
	int	i;
	int	temp;

	i = 1;
	numb_digits = 0;
	temp = number;
	if (number == 0 && digit_limit > 2)
		numb_digits++;
	while (temp > 0)
	{
		temp = temp / 10;
		numb_digits++;
	}
	if (numb_digits < digit_limit - 1)
		return (0);
	while (i < digit_limit)
	{
		if (number % 10 <= ((number / 10) % 10))
			return (0);
		number = number / 10;
		i++;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	limit;

	i = 0;
	limit = ft_calc_limit(n);
	while (i <= limit)
	{
		if (check_digits(i, n) == 1)
		{
			ft_write_zeros(i, n);
			ft_putnbr(i);
			if (i < limit)
				write(1, ", ", 2);
		}
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_combn(atoi(argv[1]));
}*/
