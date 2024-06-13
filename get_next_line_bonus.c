/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:22:24 by jidrizi           #+#    #+#             */
/*   Updated: 2024/06/13 12:55:44 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	gnl_bzero(void *s, size_t n)
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

char	*gnl_strjoin(char *s1, char *s2)
{
	int		x;
	char	*fun;

	x = gnl_strlen(s1) + gnl_strlen(s2) + 1;
	fun = malloc(x * sizeof(char));
	if (!fun && s1)
		return (free(s1), NULL);
	if (!fun)
		return (NULL);
	gnl_bzero(fun, x * sizeof(char));
	if (s1)
		gnl_strlcpy(fun, s1, x);
	if (s2)
		gnl_strlcat(fun, s2, x);
	if (s1)
		free(s1);
	return (fun);
}

char	*ft_read_until_new_line_or_eof(char *sstring, int fd, int error)
{
	char	*r_line;

	r_line = NULL;
	if (*sstring == '\0')
		error = read(fd, sstring, BUFFER_SIZE);
	if (error < 1)
		return (NULL);
	while (*sstring && !(gnl_strchr(sstring, '\n') || error < BUFFER_SIZE))
	{
		r_line = gnl_strjoin(r_line, sstring);
		if (r_line == NULL)
			return ((void *)1);
		gnl_bzero(sstring, BUFFER_SIZE + 1);
		error = read(fd, sstring, BUFFER_SIZE);
		if (r_line && error < 0)
			return (free (r_line), NULL);
		if (error < 0)
			return (NULL);
	}
	return (r_line);
}

char	*get_next_line(int fd)
{
	static char	sstring[MAX_SIZE][BUFFER_SIZE + 1];
	char		*new_line;
	char		*r_line;

	if (fd < 0 || fd > MAX_SIZE)
		return (NULL);
	r_line = ft_read_until_new_line_or_eof(sstring[fd], fd, BUFFER_SIZE);
	if (r_line == (void *)1)
		return (gnl_bzero(sstring[fd], BUFFER_SIZE), NULL);
	if (sstring[fd][0] == 0 && r_line == NULL)
		return (NULL);
	new_line = gnl_strchr(sstring[fd], '\n');
	if (new_line != NULL)
		*new_line = '\0';
	r_line = gnl_strjoin(r_line, sstring[fd]);
	if (new_line != NULL)
		r_line = gnl_strjoin(r_line, "\n");
	if (r_line == NULL)
		return (NULL);
	if (new_line != NULL && new_line[1] != '\0')
		gnl_strlcpy(sstring[fd], new_line + 1, gnl_strlen(new_line + 1) + 1);
	else
		gnl_bzero(sstring[fd], BUFFER_SIZE + 1);
	return (r_line);
}

// #ifdef DBUG

// int	main(void)
// {
// 	// int		fd;
// 	char	*str;

// 	// fd = open("a", O_RDONLY);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		str = get_next_line(0);
// 		printf("<Line %i>%s\n", i, str);
// 		free(str);
// 	}
// 	return (0);
// }
// #endif