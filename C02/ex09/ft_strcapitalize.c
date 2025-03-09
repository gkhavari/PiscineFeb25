/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 01:19:00 by giti              #+#    #+#             */
/*   Updated: 2025/03/06 01:25:22 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_make_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char	ft_make_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	is_alpha_num(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
		{
			str[0] = ft_make_upper(str[0]);
			i++;
		}
		str[i] = ft_make_lower(str[i]);
		if (!is_alpha_num(str[i - 1]) && is_alpha_num(str[i]))
			str[i] = ft_make_upper(str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[80] = "salut, comMent tu vas ? 
42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/
