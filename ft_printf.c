/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:28:51 by gmohamed          #+#    #+#             */
/*   Updated: 2024/07/27 23:28:54 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pick(const char *s, va_list vars, int *i, int *len)
{
	int	l;

	if (s[*i + 1] == 'c')
		*len += ft_putchar(va_arg(vars, int));
	if (s[*i + 1] == 's')
		*len += ft_putstr(va_arg(vars, char *));
	if (s[*i + 1] == 'p')
		*len += ft_pointer(va_arg(vars, unsigned long long));
	if (s[*i + 1] == 'd' || s[*i + 1] == 'i')
	{	
		ft_integer(va_arg(vars, int), &l);
		*len += l;
	}
	if (s[*i + 1] == 'u')
		*len += ft_unsigned(va_arg(vars, unsigned int));
	if (s[*i + 1] == 'x' || s[*i + 1] == 'X')
	{	
		ft_hex(va_arg(vars, int), s[*i + 1], &l);
		*len += l;
	}
	if (s[*i + 1] == '%')
	{
		write(1, "%", 1);
		*len += 1;
	}
}

int	ft_printf(char const *s, ...)
{
	int		i;
	int		len;
	va_list	vars;

	va_start(vars, s);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_pick(s, vars, &i, &len);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			len++;
		}
		i++;
	}
	va_end(vars);
	return (len);
}
