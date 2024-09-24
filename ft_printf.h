/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:56:19 by gmohamed          #+#    #+#             */
/*   Updated: 2024/07/28 10:56:50 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(char const *s, ...);
unsigned int	ft_intlen(long n);
unsigned int	ft_pointer_intlen(unsigned long long n);
int				ft_putstr(char *s);
int				ft_putchar(int c);
void			ft_integer(int n, int *l);
int				ft_unsigned(unsigned int n);
void			ft_hex( unsigned int n, char x, int *l);
int				ft_pointer_neg_hex(unsigned long long n, char *hex);
void			ft_pointer_hex(unsigned long long n, int *l);
int				ft_pointer(unsigned long long ptr);

#endif
