/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 01:56:26 by giti              #+#    #+#             */
/*   Updated: 2025/03/06 02:01:29 by giti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (len_dest + i <= size && src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (len_dest + ft_strlen(src));
}
