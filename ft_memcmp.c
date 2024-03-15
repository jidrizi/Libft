/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:02:12 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/14 15:13:52 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x1;
	unsigned char	*x2;
	size_t			y;

	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	y = 0;
	while (y < n)
	{
		if (x1[y] != x2[y])
			return (x1[y] - x2[y]);
		y++;
	}
	return (0);
}
