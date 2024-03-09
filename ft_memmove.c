/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:31:15 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/08 12:16:27 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*ssrc;
	unsigned char		*sdst;
	size_t				x;

	ssrc = (const unsigned char *)src;
	sdst = (unsigned char *)dst;
	x = 0;
	if (ssrc == NULL && sdst == NULL)
		return (NULL);
	while (x < len)
	{
		sdst[x] = ssrc[x];
		x++;
	}
	return (dst);
}
