/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unslng.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:19:02 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/12 19:03:34 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a number and a base, and prints the number in the base
 * 
 * @param nbr the number to be printed
 * @param base the base you want to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_putnbr_base_unslng(unsigned long nbr, char *base)
{
	/* Creating an array of 16 integers. */
	int	nbr_final[16];
	int	i;
	int	prnthex;

	i = 0;
	prnthex = 0;
	if (nbr == 0)
		prnthex += ft_putchar('0');
	while (nbr)
	{
		nbr_final[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
		prnthex += ft_putchar(base[nbr_final[i]]);
	return (prnthex);
}
