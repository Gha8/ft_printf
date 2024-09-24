/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:03:29 by gmohamed          #+#    #+#             */
/*   Updated: 2024/07/27 23:22:43 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_putnbr_hex(unsigned int nbr, char *base)
{
	if (nbr >= 16)
		ft_putnbr_hex(nbr / 16, base);
	ft_putchar(base[nbr % 16]);
}

void	ft_hex(unsigned int nbr, char format, int *len)
{
	char			*base;
	int				temp_len;
	unsigned int	temp_nbr;

	temp_len = 0;
	temp_nbr = nbr;
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	if (nbr == 0)
		temp_len = 1;
	else
	{
		while (temp_nbr > 0)
		{
			temp_nbr /= 16;
			temp_len++;
		}
	}
	ft_putnbr_hex(nbr, base);
	*len = temp_len;
}
