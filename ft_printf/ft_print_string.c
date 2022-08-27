#include "ft_printf.h"

int	ft_print_string(char *str)
{
	if (str)
		return (write(1, str, ft_strlen(str)));
	return (write(1, "(null)", 6));
}