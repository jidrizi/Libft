/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:22:30 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/09 14:00:45 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;

	x = 0;
	if (dstsize == 0)
	{
		while (src[x])
			x++;
		return (x);
	}
	while (x < dstsize - 1 && src[x])
	{
		dst[x] = src[x];
		x++;
	}
	if (x < dstsize)
		dst[x] = '\0';
	while (src[x])
		x++;
	return (x);
}
