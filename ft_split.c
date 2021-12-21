/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:17:37 by fguy              #+#    #+#             */
/*   Updated: 2021/12/18 18:04:13 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tab_cmp(const char *s, char c)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && i == 0)
			cmp++;
		else if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			cmp++;
		i++;
	}
	return (cmp);
}

static int	size_next_tab(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		nbrstr;
	char	**sb_strings;
	size_t	start;
	int		len;
	int		a;

	if (s == NULL)
		return (NULL);
	nbrstr = ft_tab_cmp(s, c);
	sb_strings = malloc(sizeof(char *) * (nbrstr + 1));
	if (!sb_strings)
		return (NULL);
	start = 0;
	a = 0;
	while (nbrstr > a)
	{
		while (s[start] == c)
			start++;
		len = size_next_tab(&s[start], c);
		sb_strings[a] = ft_substr(s, start, len);
		a++;
		start = start + len;
	}
	sb_strings[nbrstr] = NULL;
	return (sb_strings);
}
