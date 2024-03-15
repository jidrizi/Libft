/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:41:48 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/15 16:00:10 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*mem;
	size_t	x;
	size_t	s1size;

	s1size = ft_strlen(s1);
	x = 0;
	mem = malloc(sizeof(char) * s1size + 1);
	if (!mem)
		return (0);
	while (s1[x] != '\0')
	{
		mem[x] = s1[x];
		x++;
	}
	mem[x] = '\0';
	return (mem);
}
