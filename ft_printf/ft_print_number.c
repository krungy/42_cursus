#include "ft_printf.h"

int ft_convert_int(int nbr) 
{
	int		len;
	char	c;

	len = 0;
	if (nbr >= 10)
		len += ft_convert_int(nbr / 10);
	c = nbr % 10 + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_print_int(int nbr)
{
	int len;

	len = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nbr < 0)
	{
		len += write(1, "-", 1);
		nbr *= -1;
	}
	return (ft_convert_int(nbr) + len);
}

int	ft_print_unsigned_int(unsigned int nbr)
{
	unsigned int	len;
	char			c;

	len = 0;
	if (nbr >= 10)
		len += ft_print_unsigned_int(nbr / 10);
	c = nbr % 10 + '0';
	len += write(1, &c, 1);
	return (len);
}