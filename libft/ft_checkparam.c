/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkparam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:25:55 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/18 16:23:54 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It checks the input string for the presence of a valid conversion specifier, 
 * and if it finds one, it calls the appropriate function to print the argument
 * 
 * @param input the string that is being parsed
 * @param i the index of the input string
 * @param count the number of characters printed
 * @param  `const char *input` - the string that is being passed to the function
 * 
 * @return The number of characters printed.
 */
int	ft_checkparam(const char *input, int i, int count, va_list (argms))
{
	if (input[i + 1] == '%')
		count += write(1, "%", 1);
	if (input[i + 1] == 'c')
		count += ft_putchar(va_arg(argms, int));
	if (input[i + 1] == 's')
		count += ft_putstr(va_arg(argms, char *));
	if (input[i + 1] == 'p')
		count += ft_hexpointer(va_arg(argms, size_t));
	if (input[i + 1] == 'i' || input[i + 1] == 'd')
		count += ft_putnbr(va_arg(argms, int));
	if (input[i + 1] == 'u')
		count += ft_putnbr_uns(va_arg(argms, unsigned int));
	if (input[i + 1] == 'x')
		count += ft_putnbr_base_uns(va_arg(argms, int), "0123456789abcdef");
	if (input[i + 1] == 'X')
		count += ft_putnbr_base_uns(va_arg(argms, int), "0123456789ABCDEF");
	return (count);
}
