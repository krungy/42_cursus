#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_print_string(char *str)
{
	int	len;

	len = 0;
	if (str) 
		len += write(1, str, ft_strlen(str));
	else 
		len += write(1, "(null)", 6);
		
	return (len);
}