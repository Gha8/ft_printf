/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:25:32 by gmohamed          #+#    #+#             */
/*   Updated: 2024/07/27 23:25:40 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_integer(int n, int *l)
{
	int		length;
	char	*result;
	long	nbr;

	result = malloc(sizeof(char) * ft_intlen(n));
	length = 0;
	nbr = n;
	*l = ft_intlen(n);
	if (nbr == 0)
		write(1, "0", 1);
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	while (nbr != 0)
	{
		result[length] = nbr % 10 + '0';
		nbr /= 10;
		length++;
	}
	while (--length >= 0)
		write(1, &result[length], 1);
	free(result);
}
