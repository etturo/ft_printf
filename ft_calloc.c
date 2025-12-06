/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturini <eturini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:37:09 by eturini           #+#    #+#             */
/*   Updated: 2025/12/06 18:27:35 by eturini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(int is_up)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 16);
	if (!s)
		return ((void *)0);
	if (is_up == TRUE)
		s = "0123456789ABCDEF";
	else
		s = "0123456789abcdef";
	return (s);
}
