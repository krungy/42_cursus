/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:39:25 by sojilee           #+#    #+#             */
/*   Updated: 2022/07/13 19:43:49 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int				i;
	int				length;
	unsigned char	*dst;

	i = 0;
	length = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * (length + 1));
	if (!dst)
		return (NULL);
	while (i < length)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
