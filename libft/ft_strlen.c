/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:04:24 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/18 16:20:00 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<stdio.h>*/

/**
 * This function takes a string as a parameter and returns the length of 
 * the string
 * @param str This is the string that we are going to find the length of.
 * 
 * @return The length of the string.
 */
size_t	ft_strlen(const char *str)
{
	unsigned long int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
