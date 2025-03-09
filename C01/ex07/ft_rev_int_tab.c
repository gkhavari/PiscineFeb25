/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 01:11:13 by giti              #+#    #+#             */
/*   Updated: 2025/03/06 01:11:36 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int tab[] = {1, 2, 3, 4};
	printf("Before: {%i, %i, %i, %i}\n", tab[0], tab[1], tab[2], tab[3]);
	ft_rev_int_tab(tab, 4);
	printf("After: {%i, %i, %i, %i}\n", tab[0], tab[1], tab[2], tab[3]);
}*/
