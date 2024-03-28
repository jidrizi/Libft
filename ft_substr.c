/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:03:26 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/28 18:03:45 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	oglen;
	char	*substr;

	oglen = ft_strlen(s);
	if (start > oglen)
	{
		return (ft_strdup(""));
	}
	if (start + len > oglen)
	{
		len = oglen - start;
	}
	substr = (char *)malloc(len + 1);
	if (substr == 0)
	{
		return (0);
	}
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
