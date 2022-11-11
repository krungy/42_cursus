/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:52:12 by sojilee           #+#    #+#             */
/*   Updated: 2022/11/11 13:54:34 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_print_string(va_list ap)
{
	int		len;
	char	*str;

	len = 0;
	str = va_arg(ap, char *);
	if (str)
		len += write(1, str, ft_strlen(str));
	else
		len += write(1, "(null)", 6);
	return (len);
}
