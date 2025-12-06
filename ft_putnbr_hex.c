/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturini <eturini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 18:01:58 by eturini           #+#    #+#             */
/*   Updated: 2025/12/06 18:32:14 by eturini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(int nbr, int is_up, int *count)
{
	int			count_base;
	long int	numb;
	char		*base;

	if (is_up == TRUE)
		base = ft_calloc(TRUE);
	else
		base = ft_calloc(FALSE);
	numb = nbr;
	count_base = 0;
	while (base[count_base] != '\0')
		count_base++;
	if (numb < 0)
	{
		write(1, "-", 1);
		(*count)++;
		numb = numb * (-1);
	}
	if (numb >= 16)
		ft_putnbr_hex((numb / (16)), is_up, count);
	write(1, &base[(numb % 16)], 1);
	(*count)++;
	return (TRUE);
}
