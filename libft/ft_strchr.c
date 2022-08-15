/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:17:52 by sojilee           #+#    #+#             */
/*   Updated: 2022/08/15 17:24:13 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	to_find;
	int				i;

	to_find = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == to_find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == to_find)
		return ((char *)s + i);
	return (0);
}
