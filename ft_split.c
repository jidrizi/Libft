/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:33:09 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/26 20:33:31 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wcount(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static void	freemem(char **str, int count)
{
	while (count >= 0)
	{
		free(str[count]);
		count--;
	}
	free(str);
}

static void	mem_allocate(char ***array, char const *s, char c)
{
	char		**array_n;
	char const	*temp;

	array_n = *array;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		temp = s;
		while (*temp && *temp != c)
			temp++;
		if (temp > s)
		{
			*array_n = ft_substr(s, 0, temp - s);
			if (!*array_n)
			{
				freemem(*array, array_n - *array);
				*array = NULL;
				return ;
			}
			array_n++;
		}
		s = temp;
	}
	*array_n = 0;
}

char	**ft_split(char const *s, char c)
{
	int			count;
	char		**result;

	if (s == NULL)
		return (NULL);
	count = wcount(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	mem_allocate(&result, s, c);
	return (result);
}
