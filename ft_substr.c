/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:15:44 by fguy              #+#    #+#             */
/*   Updated: 2021/12/18 15:37:58 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*snew;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	snew = (char *)malloc(sizeof(char) * len + 1);
	if (!snew)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		snew[i] = s[start];
		start++;
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
