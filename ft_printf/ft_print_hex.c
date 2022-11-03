#include "ft_printf.h"

int ft_convert_hex(char *base, unsigned long long dec) 
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

int	ft_print_hex(unsigned long long dec, char x)
{
	char	*base;

	if (x == 'x')
		base = "0123456789abcdef";
	else if (x == 'X')
		base = "0123456789ABCDEF";
	else
		return (-1);
	return ft_convert_hex(base, dec);
}

int	ft_print_addr(unsigned long long dec)
{
	write(1, "0x", 2);
	return (ft_convert_hex("0123456789abcdef", dec) + 2);
}