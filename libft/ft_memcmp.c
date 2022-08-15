/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:18:39 by sojilee           #+#    #+#             */
/*   Updated: 2022/08/15 16:39:23 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*copydst;
	unsigned char	*copysrc;

	i = 0;
	copydst = (unsigned char *)s1;
	copysrc = (unsigned char *)s2;
	while (i < n)
	{
		if (copydst[i] != copysrc[i])
			return (copydst[i] - copysrc[i]);
		i++;
	}
	return (0);
}
