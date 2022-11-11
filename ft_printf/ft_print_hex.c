/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:50:58 by sojilee           #+#    #+#             */
/*   Updated: 2022/11/11 13:51:36 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_hex(char *base, unsigned long long dec)
{
	int		len;
	char	c;

	len = 0;
	if (dec >= 16)
		len += ft_convert_hex(base, dec / 16);
	c = base[dec % 16];
	len += write(1, &c, 1);
	return (len);
}

int	ft_print_hex(va_list ap, char x)
{
	char				*base;
	unsigned long long	dec;

	dec = va_arg(ap, unsigned int);
	if (x == 'x')
		base = "0123456789abcdef";
	else if (x == 'X')
		base = "0123456789ABCDEF";
	else
		return (-1);
	return (ft_convert_hex(base, dec));
}

int	ft_print_addr(va_list ap)
{
	unsigned long long	dec;

	dec = va_arg(ap, unsigned long long);
	write(1, "0x", 2);
	return (ft_convert_hex("0123456789abcdef", dec) + 2);
}
