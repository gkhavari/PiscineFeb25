/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:10:45 by giti              #+#    #+#             */
/*   Updated: 2025/03/07 17:31:35 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%i\n", ft_iterative_factorial(0));
	printf("%i\n", ft_iterative_factorial(2));
	printf("%i\n", ft_iterative_factorial(3));
}*/
