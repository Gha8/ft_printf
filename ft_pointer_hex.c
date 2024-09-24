/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:27:53 by gmohamed          #+#    #+#             */
/*   Updated: 2024/07/27 23:27:57 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer_hex(unsigned long long n, int *l)
{
	int			length;
	char		*result;
	char		*hex;

	result = malloc(sizeof(char) * ft_pointer_intlen(n) + 1);
	if (!result)
		return ;
	hex = "0123456789abcdef";
	length = 0;
	while (n != 0)
	{
		result[length] = hex[(n % 16)];
		n /= 16;
		length++;
	}
	*l = length;
	while (--length >= 0)
		write(1, &result[length], 1);
	free(result);
}
