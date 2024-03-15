/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:02:42 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/15 14:23:08 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	sign;
	int	result;

	x = 0;
	sign = 1;
	result = 0;
	while (str[x] && (str[x] == ' ' || str[x] == '\r' || str[x] == '\n'
			|| str[x] == '\f' || str[x] == '\t' || str[x] == '\v'))
		x++;
	if (str[x] && (str[x] == '-' || str[x] == '+'))
	{
		if (str[x] == '-')
		{
			sign *= -1;
		}
		x++;
	}
	while (str[x] && (str[x] <= '9' && str[x] >= '0'))
	{
		result = result * 10 + (str[x] - 48);
		x++;
	}
	return (result * sign);
}
