/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:15:07 by sojilee           #+#    #+#             */
/*   Updated: 2022/07/13 18:57:27 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*resdst;
	unsigned char	*copysrc;

	i = 0;
	resdst = (unsigned char *)dst;
	copysrc = (unsigned char *)src;

	if (len = 0 || dst == src)
		return (dst);
	if (dst < src)
		while (i < len)
		{
			resdst[i] = copysrc[i];
			i++;
		}
	else
		while (i < len)
		{
			resdst[len - i - 1] = copysrc[len - i - 1];
			i++;
		}
	return (dst);
}
