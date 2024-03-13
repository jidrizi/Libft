/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:27:11 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/13 14:18:59 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	x;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	x = 0;
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (src[x] && dstsize - 1 > dlen + x)
	{
		dst[dlen + x] = src[x];
		x++;
	}
	dst[dlen + x] = '\0';
	return (dlen + slen);
}
