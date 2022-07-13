/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:48:36 by sojilee           #+#    #+#             */
/*   Updated: 2022/07/13 17:59:45 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void bzero(void *b, size_t n)
{
	size_t	i;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *)b;

	while (i < n)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}
