/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:50:37 by jidrizi           #+#    #+#             */
/*   Updated: 2024/06/15 15:39:37 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	char	*fun;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	x = ft_strlen(s1) + ft_strlen(s2) + 1;
	fun = malloc(x * sizeof(char));
	if (!fun)
		return (0);
	ft_strlcpy(fun, s1, x);
	ft_strlcat(fun, s2, x);
	return (fun);
}
