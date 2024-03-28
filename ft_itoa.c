/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:49:09 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/28 18:16:51 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(long long x)
{
	int	digits;

	digits = 0;
	if (!x)
		return (1);
	if (x < 0)
	{
		x = -x;
		digits++;
	}
	while (x)
	{
		digits++;
		x = x / 10;
	}
	return ((int)digits);
}

char	*ft_itoa(int n)
{
	long long	y;
	char		*ptr;
	int			extent;

	if (!n)
		return (ft_strdup("0"));
	y = n;
	extent = size(y);
	ptr = (char *)malloc(extent + 1);
	if (!ptr)
		return (0);
	if (n < 0)
	{
		ptr[0] = '-';
		y = -y;
	}
	ptr[extent] = '\0';
	while ((extent || y) && y > 0)
	{
		extent--;
		ptr[extent] = (y % 10) + 48;
		y = y / 10;
	}
	return (ptr);
}
