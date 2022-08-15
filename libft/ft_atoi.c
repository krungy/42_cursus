/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:11:45 by sojilee           #+#    #+#             */
/*   Updated: 2022/08/15 16:11:35 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int			i;
	int			flag;
	long long	res;

	i = 0;
	flag = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res * flag > 2147483647)
			return (-1);
		else if (res * flag < -2147483648)
			return (0);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * flag);
}
