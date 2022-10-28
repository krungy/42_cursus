#include "ft_printf.h"

int	ft_parse(const char *format, va_list ap)
{
	if (format == '%')
		return (write(1, '%', 1));
	else if (format == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (format == 's')
		return (ft_print_string(va_arg(ap, char *)));
	else if (format == 'd' || format == 'i')
		return (va_arg(ap, int));
	else if (format == 'p')
		return (va_arg(ap, unsigned long long));
	else if (format == 'u')
		return (va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		return (va_arg(ap, unsigned int));
	else
		return (-1);
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
				break;
			res += ft_parse(*format, ap);
		}
		else
			res += write(1, format, 1);
		format++;
	}
	return res;
}

int	ft_printf(const char *format, ...)
{
	int			res;
	va_list		ap;

	res = 0;
	va_start(ap, format);
	res = ft_print_start((char *)format, &ap);
	va_end(ap);

	return (res);
}