/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:33:38 by sojilee           #+#    #+#             */
/*   Updated: 2022/09/08 16:53:45 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	ft_arr_count(char *str, char c)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && str[i] != c)
			|| (str[i] == c && str[i + 1] != c && str[i + 1] != '\0'))
				cnt++;
		i++;
	}
	return (cnt);
}

static char	*ft_split_word(char *s, int length)
{
	int		i;
	char	*ans;

	if (length == 0)
		return (NULL);
	ans = (char *)malloc(sizeof(char) * (length + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ans[i] = s[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		k;
	int		alength;
	int		start;
	char	**ans;

	alength = ft_arr_count(s, c);
	ans = (char **)malloc(sizeof(char *) * (alength + 1));
	if (!ans)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] && k < alength)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		ans[k] = ft_split_word(&s[start], i - start);
		if (!ans[k++])
			return (ft_free(ans));
	}
	ans[k] = 0;
	return (ans);
}
