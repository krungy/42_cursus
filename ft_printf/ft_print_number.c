/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:51:53 by sojilee           #+#    #+#             */
/*   Updated: 2022/11/11 13:52:07 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_int(int nbr)
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

int	ft_print_int(va_list ap)
{
	int	len;
	int	nbr;

	len = 0;
	nbr = va_arg(ap, int);
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
