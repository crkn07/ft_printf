/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_uns.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:12:49 by crtorres          #+#    #+#             */
/*   Updated: 2022/12/01 16:34:50 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It prints an unsigned int in a given base
 * 
 * @param nbr the number to be printed
 * @param base the base to convert to
 * 
 * @return The number of characters printed.
 */
int	ft_putnbr_base_uns(unsigned int nbr, char *base)
{
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
