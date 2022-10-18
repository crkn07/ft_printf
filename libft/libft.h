/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:29:38 by crtorres          #+#    #+#             */
/*   Updated: 2022/10/18 16:23:14 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *str);
int		ft_checkparam(const char *input, int i, int count, va_list (argms));
int		ft_hexpointer(unsigned long pnt);
int		ft_putnbr_base_unslng(unsigned long nbr, char *base);
int		ft_putnbr_base_uns(unsigned int nbr, char *base);
int		ft_printparam(int i, int count, const char *inp, va_list argms);
int		ft_putnbr_uns(unsigned int n);

#endif