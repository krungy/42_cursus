/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:14:09 by sojilee           #+#    #+#             */
/*   Updated: 2022/09/12 14:25:54 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	start = 0;
	if (s1 && set)
	{
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[start], end - start + 1);
	}
	return (str);
}
