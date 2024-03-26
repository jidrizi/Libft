/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:33:09 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/26 18:01:58 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fill(char const *s, char c, int size, char **array)
{
	int	x;
	int	y;
	int	len;

	x = 0;
	y = 0;
	while (size > x)
	{
		len = 0;
		while (s[y] && s[y] == c)
			y++;
		while (s[y] && s[y] != c)
		{
			len++;
			y++;
		}
		array[x] = malloc((len + 1) * sizeof(char));
		if (!array[x])
			return (x + 1);
		ft_strlcpy(array[x], s + y - len, len + 1);
		x++;
	}
	return (0);
}

static void	bruh(char **array, int bro)
{
	int	a;

	a = 0;
	while (a < bro)
	{
		free(array[a]);
		a++;
	}
	free(array);
}

static size_t	counting_with_euene(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!(*s))
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		count++;
		while (*s && *s != c)
			s++;
	}
	s--;
	if (*s == c)
		return (count - 1);
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**abc;
	size_t	size;
	int		b;

	if (!s)
		return (0);
	size = counting_with_euene(s, c);
	abc = malloc((size + 1) * sizeof(char *));
	if (!(abc))
		return (0);
	if (size)
	{
		b = fill(s, c, size, abc);
		if (b != 0)
		{
			bruh(abc, b);
			return (0);
		}
	}
	abc[size] = 0;
	return (abc);
}
