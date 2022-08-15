/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:29:52 by sojilee           #+#    #+#             */
/*   Updated: 2022/08/15 17:31:36 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	to_find;
	size_t			length;

	to_find = (unsigned char)c;
	length = ft_strlen(s);
	while (length > 0)
	{
		if (s[length] == to_find)
			return ((char *)s + length);
		length--;
	}
	if (s[length] == to_find)
		return ((char *)s + length);
	return (0);
}
