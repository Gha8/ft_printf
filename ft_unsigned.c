/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:23:35 by gmohamed          #+#    #+#             */
/*   Updated: 2024/07/27 23:23:44 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int				length;
	char			*result;
	unsigned long	nbr;
	int				l;

	result = malloc(sizeof(char) * ft_intlen(n));
	length = 0;
	nbr = n;
	if (nbr == 0)
	{
		write(1, "0", 1);
		length = 1;
	}
	while (nbr != 0)
	{
		result[length] = nbr % 10 + '0';
		nbr /= 10;
		length++;
	}
	l = length;
	while (--length >= 0 && n != 0)
		write(1, &result[length], 1);
	free(result);
	return (l);
}
