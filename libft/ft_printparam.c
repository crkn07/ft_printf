/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printparam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:38:37 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/18 16:22:35 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a string, and a list of arguments, and prints the string, 
 * replacing any % with the next argument in the list
 * 
 * @param i the index of the string
 * @param count the number of characters printed
 * @param inp the string to be printed
 * @param ap the va_list
 * 
 * @return The number of characters printed.
 */
int	ft_printparam(int i, int count, const char *inp, va_list argms)
{
	if (!inp)
		return (0);
	while (inp[i] != '\0')
	{
		if (inp[i] == '%')
		{
			count = ft_checkparam(inp, i, count, argms);
			i++;
		}
		else
			count += write(1, &inp[i], 1);
		i++;
	}
	return (count);
}
