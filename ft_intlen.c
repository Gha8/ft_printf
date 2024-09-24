/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:12:45 by gmohamed          #+#    #+#             */
/*   Updated: 2024/07/27 21:12:58 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_intlen(long n)
{
	unsigned int	len;
	unsigned int	num;

	len = 0;
	if (n < 0)
	{
		len++;
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		len++;
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}
