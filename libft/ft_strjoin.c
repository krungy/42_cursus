/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:56:15 by sojilee           #+#    #+#             */
/*   Updated: 2022/09/12 14:25:21 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		res[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
