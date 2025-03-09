/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 01:12:03 by giti              #+#    #+#             */
/*   Updated: 2025/03/06 01:13:18 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[j - 1] > tab[j])
			{
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	int tab[] = {5, 4, 8, 6, 1};
	ft_sort_int_tab(tab, 5);
	printf("sorted: {%i, %i, %i, %i, %i}", 
tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
