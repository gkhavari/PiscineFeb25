/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 01:20:28 by giti              #+#    #+#             */
/*   Updated: 2025/03/06 01:53:22 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

void	ft_putnbr_hex(char numb)
{
	char	*base;

	base = "0123456789abcdef";
	if (numb > 16)
		ft_putnbr_hex(numb / 16);
	write(1, &base[numb % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_putnbr_hex(str[i]);
		}
		i++;
	}
}
/*
int main()
{
	ft_putstr_non_printable("fieuh\neiurfhwei");
}*/
