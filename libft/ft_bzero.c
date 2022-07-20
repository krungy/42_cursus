/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:48:36 by sojilee           #+#    #+#             */
/*   Updated: 2022/07/20 16:07:14 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *)s;

	while (i < n)
	{
		res[i] = 0;
		i++;
	}
}
