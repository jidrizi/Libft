/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:52:33 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/24 12:14:38 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*y;

	x = 0;
	y = malloc(ft_strlen(s) + 1);
	if (!y)
		return (0);
	while (s[x])
	{
		y[x] = f(x, s[x]);
		x++;
	}
	y[x] = '\0';
	return (y);
}
