/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturini <eturini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:38:49 by eturini           #+#    #+#             */
/*   Updated: 2025/12/06 18:28:27 by eturini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0

int		ft_printf(char *format, ...);
int		handle_format(char *s, va_list argptr, int *count);
int		ft_putstr(char *s, int *count);
int		ft_putnbr(int n, int *count);
int		ft_putnbr_u(unsigned int n, int *count);
int		ft_putnbr_hex(int nbr, int is_up, int *count);
int		ft_putchar(char c, int *count);
void	*ft_calloc(int is_up);

#endif