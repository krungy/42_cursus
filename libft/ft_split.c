/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:33:38 by sojilee           #+#    #+#             */
/*   Updated: 2022/08/15 16:59:48 by sojilee          ###   ########.fr       */
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

static int	ft_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_arr_count(char *str, char *charset)
{
	int		i;
	int		cnt;

	i = 1;
	cnt = 1;
	while (str[i] != '\0')
	{
		if (ft_sep(charset, str[i]) && !ft_sep(charset, str[i - 1]))
			cnt++;
		i++;
	}
	return (cnt);
}

static char	*ft_putstr(char *str, int length, int start)
{
	int		i;
	char	*ans;

	ans = (char *)malloc(sizeof(char) * length);
	if (!ans)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ans[i] = str[start];
		i++;
		start++;
	}
	ans[i] = '\0';
	return (ans);
}

char	**ft_split(char *s, char *c)
{
	int		i;
	int		k;
	int		start;
	int		alength;
	char	**ans;

	alength = ft_arr_count(s, c);
	ans = (char **)malloc(sizeof(char *) * (alength + 1));
	if (!ans)
		return (NULL);
	i = -1;
	k = 0;
	start = 0;
	while (++i < alength)
	{
		if (s[i] == '\0')
			return (ft_free(ans));
		if (ft_sep(c, s[i]))
			start = i + 1;
		else if (!ft_sep(c, s[i]) && (ft_sep(c, s[i + 1])
				|| s[i + 1] == '\0'))
			ans[k++] = ft_putstr(s, i - start + 1, start);
	}
	ans[k] = 0;
	return (ans);
}
