/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:00:19 by sojilee           #+#    #+#             */
/*   Updated: 2022/08/15 17:48:52 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;

	i = 0;
	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s1cpy[i] != '\0' && s2cpy[i] != '\0'
		&& s1cpy[i] == s2cpy[i] && i < n)
	{
		i++;
	}
	return (s1cpy[i] - s2cpy[i]);
}
