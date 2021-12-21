/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:20:52 by fguy              #+#    #+#             */
/*   Updated: 2021/12/16 22:15:59 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (!str || !fd)
		return ;
	write(fd, str, ft_strlen(str));
	ft_putchar_fd('\n', fd);
}
