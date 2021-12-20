/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:56:15 by fguy              #+#    #+#             */
/*   Updated: 2021/12/17 13:29:33 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*s_origin;

	i = 0;
	while (s[i] != '\0')
		i++;
	s_origin = s;
	s = s + i;
	while (s != s_origin && *s != (char)c)
		s--;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
