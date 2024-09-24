/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:27:05 by gmohamed          #+#    #+#             */
/*   Updated: 2024/07/27 23:27:10 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long long ptr)
{
	int	l;

	l = 0;
	if (ptr == 0)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	ft_putstr("0x");
	ft_pointer_hex(ptr, &l);
	return (l + 2);
}
