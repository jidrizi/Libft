/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:11:43 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/07 15:03:39 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*streng;
	size_t			x;

	streng = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		streng[x] = '\0';
		x++;
	}
}
