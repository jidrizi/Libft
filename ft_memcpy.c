/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:10:23 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/08 12:15:46 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*strdst;
	unsigned const char	*strsrc;
	size_t				x;

	strdst = (unsigned char *)dst;
	strsrc = (unsigned const char *)src;
	x = 0;
	if (strsrc == NULL && strdst == NULL)
		return (NULL);
	while (x < n)
	{
		*strdst++ = *strsrc++;
		x++;
	}
	return (dst);
}
