/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:47:54 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/18 16:21:28 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * The function ft_printf() takes a string and a variable number of arguments, 
 * and returns the number of characters printed
 * @param inp The string to be printed.
 * 
 * @return The number of characters printed.
 */
int	ft_printf(char const *inp, ...)
{
	int		i;
	int		count;
	va_list	argms;

	i = 0;
	count = 0;
	va_start(argms, inp);
	count += ft_printparam(i, count, inp, argms);
	va_end(argms);
	return (count);
}
