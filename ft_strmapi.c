/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:18:54 by fguy              #+#    #+#             */
/*   Updated: 2021/12/18 16:55:28 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		k;

	k = 0;
	if (!s || !f)
		return (NULL);
	res = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!res)
		return (NULL);
	while (s[k] != '\0')
	{
		res[k] = f(k, s[k]);
		k++;
	}
	res[k] = '\0';
	return (res);
}
