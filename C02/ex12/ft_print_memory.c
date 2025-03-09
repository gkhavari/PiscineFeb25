/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 01:21:23 by giti              #+#    #+#             */
/*   Updated: 2025/03/06 01:31:31 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putzero(char c)
{
	if (c < 16)
		write(1, "0", 1);
}

void	ft_putnbr_hex(unsigned long c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c > 16)
		ft_putnbr_hex(c / 16);
	write(1, &base[c % 16], 1);
}

void	ft_putstr_hex(void *addr)
{
	int		i;
	char	*str;

	str = (char *)addr;
	i = 0;
	while (str[i])
	{
		ft_putnbr_hex(str[i]);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*address;

	if (size != 0)
	{
		i = 0;
		address = (char *)addr;
		ft_putnbr_hex((unsigned long)addr);
		write(1, ":", 1);
		while (address[i])
		{
			if (i % 2 == 0)
				write(1, " ", 1);
			ft_putzero(address[i]);
			ft_putnbr_hex(address[i]);
			i++;
		}
		write(1, " ", 1);
		ft_putstr(address);
		write(1, "\n", 1);
	}
	return (addr);
}
/*
int main()
{
	void *test = "ab\n6486684cd^:";
	ft_print_memory(test, 1);
}*/
