/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:19:25 by sojilee           #+#    #+#             */
/*   Updated: 2022/07/08 17:40:21 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	ans;

	ans = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		ans = 1;

	return ans;
}


#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void) {
	char str[] = "BlockDMask1234";

	for (int i = 0; i < strlen(str); i++)
	{
		printf("base: %c answer: %d\n", str[i], isalpha(str[i]));
		printf("ft: %c answer: %d\n", str[i], ft_isalpha(str[i]));
	}

	return (0);
}
