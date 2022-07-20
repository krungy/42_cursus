/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:14:09 by sojilee           #+#    #+#             */
/*   Updated: 2022/07/20 19:15:47 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 수정 필요
#include "libft.h"
static int	ft_start(char const *str, char find)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == find)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

static int	ft_end(char const *str, char find)
{
	int i;

	i = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		if (str[i] == find)
		{
			return (i);
		}
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	// while ()
	// res = (char *)malloc(sizeof(char) * )
}
