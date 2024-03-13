/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:50:17 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/13 19:45:49 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	sc;
	int				x;

	x = 0;
	ss = (unsigned char *)s;
	sc = (unsigned char )c;
	while (n > 0)
	{
		if (ss[x] == sc)
			return ((void *)(s + x));
		x++;
		n--;
	}
	return (0);
}
