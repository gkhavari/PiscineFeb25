/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:39:15 by giti              #+#    #+#             */
/*   Updated: 2025/03/07 15:56:06 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int     valid_base(char *base)
{
	int     i;
	int     j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


void	ft_putnbr_base(int nbr, char *base)
{
	long	base_len;
	long	nbr_long;

	nbr_long = (long)nbr;
	if (!valid_base(base))
		return ;
	if (nbr_long < 0)
	{
		write(1, "-", 1);
		nbr_long = -nbr_long;
	}
	base_len = ft_strlen(base);
	if (nbr_long > base_len - 1)
		ft_putnbr_base(nbr_long / base_len, base);
	write(1, &base[nbr_long % base_len], 1);
}
/*
int main()
{
	ft_putnbr_base(100, "0123456789abcdef");
	write(1, "\n", 1);
}*/
