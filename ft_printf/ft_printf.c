/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:52:31 by sojilee           #+#    #+#             */
/*   Updated: 2022/11/11 13:54:42 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char *format, va_list ap)
{
	int	len;

	len = 0;
	if (*format == '%')
		len += write(1, "%", 1);
	else if (*format == 'c')
		len += ft_putchar(ap);
	else if (*format == 's')
		len += ft_print_string(ap);
	else if (*format == 'd' || *format == 'i')
		len += ft_print_int(ap);
	else if (*format == 'p')
		len += ft_print_addr(ap);
	else if (*format == 'u')
		len += ft_print_unsigned_int(va_arg(ap, unsigned int));
	else if (*format == 'x' || *format == 'X')
		len += ft_print_hex(ap, *format);
	else
		return (-1);
	return (len);
}

int	ft_print_start(const char *format, va_list ap)
{
	int	res;

	res = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 0)
				break ;
			res += ft_parse(format, ap);
		}
		else
			res += ft_print_char(*format);
		format++;
		if (res < 0)
			return (-1);
	}
	return (res);
}

int	ft_printf(const char *format, ...)
{
	int			res;
	va_list		ap;

	res = 0;
	va_start(ap, format);
	res = ft_print_start(format, ap);
	va_end(ap);
	return (res);
}
