/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:08:12 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/18 12:28:09 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It writes a string to the standard output
 * 
 * @param s The string to print.
 * 
 * @return The number of characters printed.
 */
int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	while (i < len)
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
