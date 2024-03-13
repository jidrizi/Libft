/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:05:47 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/13 15:48:01 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	*ss1;
	unsigned char	*ss2;

	x = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (x < n)
	{
		if (ss1[x] != ss2[x])
			return (ss1[x] - ss2[x]);
		if (ss1[x] == '\0')
			break ;
		x++;
	}
	return (0);
}
