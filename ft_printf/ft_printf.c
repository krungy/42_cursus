#include "ft_printf.h"

int	ft_parse(const char format, va_list ap)
{
	int	len;

	len = 0;
	if (format == '%')
		len += write(1, "%", 1);
	else if (format == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		len += ft_print_string(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		len += ft_print_int(va_arg(ap, int));
	else if (format == 'p')
		len += ft_print_addr(va_arg(ap, unsigned long long));
	else if (format == 'u')
		len += ft_print_unsigned_int(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(ap, unsigned int), format);
	else 
		return (-1);
	return (len);
}

int	ft_print_start(const char *format, va_list ap)
{
	int i;
	int	res;
	int	temp;

	i = 0;
	res = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 0)
				break;
			temp = ft_parse((const char)format[i], ap);
		}
		else
			temp = ft_print_char(format[i]);
		if (temp < 0)
			return (-1);
		res += temp;
		i++;
	}
	return res;
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