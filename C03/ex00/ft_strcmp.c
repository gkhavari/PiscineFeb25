/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 01:54:46 by giti              #+#    #+#             */
/*   Updated: 2025/03/06 01:54:58 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
		printf("%d\n", strcmp(argv[1], argv[2]));
	}
}*/
