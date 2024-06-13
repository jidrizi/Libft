/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:23:31 by jidrizi           #+#    #+#             */
/*   Updated: 2024/06/12 15:45:45 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	gnl_strlen( char *c)
{
	int	x;

	x = 0;
	while (c && c[x] != '\0')
	{
		x++;
	}
	return (x);
}

size_t	gnl_strlcpy(char *dst, char *src, size_t dstsize)
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

char	*gnl_strchr( char *s, int c)
{
	char	*store;

	c = c % 256;
	store = 0;
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
			return (store = (char *)s);
		s++;
	}
	return (0);
}

size_t	gnl_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	x;

	dlen = gnl_strlen(dst);
	slen = gnl_strlen(src);
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
