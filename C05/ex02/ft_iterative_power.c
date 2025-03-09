/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:01:42 by giti              #+#    #+#             */
/*   Updated: 2025/03/07 18:12:45 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_iterative_power(-1, 5));
	printf("%i\n", ft_iterative_power(5, 2));
	printf("%i\n", ft_iterative_power(2, 0));
	printf("%i\n", ft_iterative_power(0, 4));
}*/
