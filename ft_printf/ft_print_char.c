#include "ft_printf.h"

int	ft_putchar(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	return (write(1, &c, 1));
}

int	ft_print_char(char c)
{
	int len;

	len = write(1, &c, 1);
	return (len);
}