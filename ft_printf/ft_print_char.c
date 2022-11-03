#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_char(char c)
{
	int len;

	len = 0;
	len += write(1, &c, 1);
	return (len);
}