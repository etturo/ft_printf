/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturini <eturini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:36:24 by eturini           #+#    #+#             */
/*   Updated: 2025/12/06 18:30:23 by eturini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char *s, va_list argptr, int *count)
{
	if (*s == 'c')
		return (ft_putchar(va_arg(argptr, int), count));
	if (*s == 's')
		return (ft_putstr(va_arg(argptr, char *), count));
	if (*s == 'p')
		return (ft_putnbr(va_arg(argptr, unsigned long int), count));
	if (*s == 'd' || *s == 'i')
		return (ft_putnbr(va_arg(argptr, int), count));
	if (*s == 'u')
		return (ft_putnbr_u(va_arg(argptr, unsigned int), count));
	if (*s == 'x')
		return (ft_putnbr_hex(va_arg(argptr, int), FALSE, count));
	if (*s == 'X')
		return (ft_putnbr_hex(va_arg(argptr, int), TRUE, count));
	if (*s == '%')
		return (ft_putchar('%', count));
	return (-1);
}

int	ft_printf(char *format, ...)
{
	va_list	argptr;
	char	*s;
	int		count;

	va_start(argptr, format);
	s = (char *)format;
	count = 0;
	while (*s != '\0')
	{
		if (*s == '%' && handle_format(&(*s), argptr, &count) != -1)
			s++;
		else
			ft_putchar(*(s++), &count);
	}
	va_end(argptr);
	return (count);
}
