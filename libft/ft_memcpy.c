/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:58:33 by sojilee           #+#    #+#             */
/*   Updated: 2022/08/15 16:39:33 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*resdst;
	unsigned char	*copysrc;
	size_t			i;

	resdst = (unsigned char *)dst;
	copysrc = (unsigned char *)src;
	i = 0;
	if (!resdst)
		return (0);
	if (n == 0 || resdst == copysrc)
		return (resdst);
	while (i < n)
	{
		resdst[i] = copysrc[i];
		i++;
	}
	return (resdst);
}
