/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:23:44 by sojilee           #+#    #+#             */
/*   Updated: 2022/08/29 20:18:25 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		else
			n *= -1;
		len++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = ft_nbrlen(n);
	nb = n;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	else if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb /= 10;
	}
	return (str);
}
