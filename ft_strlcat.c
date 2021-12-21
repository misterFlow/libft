/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:15:07 by fguy              #+#    #+#             */
/*   Updated: 2021/12/21 18:32:21 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	mydst_size;
	size_t	mysrc_size;

	mydst_size = ft_strlen(dest);
	mysrc_size = ft_strlen(src);
	if (destsize > 0 && destsize > mydst_size)
	{
		i = mydst_size;
		j = 0;
		while (src[j] && i < destsize - 1)
			dest[i++] = src[j++];
		dest[i] = 0;
		return (mydst_size + mysrc_size);
	}
	return (destsize + mysrc_size);
}
