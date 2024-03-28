/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:16:00 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/28 17:44:55 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	if (needle[0] == 0)
		return ((char *)haystack);
	if (*haystack)
	{
		nlen = ft_strlen(needle);
		if (len == 0 || len < nlen)
			return (0);
		while (*haystack && len >= nlen)
		{
			if (ft_strncmp(haystack, needle, nlen) == 0)
				return ((char *)haystack);
			haystack++;
			len--;
		}
	}
	return (0);
}
