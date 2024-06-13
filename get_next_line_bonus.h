/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:22:53 by jidrizi           #+#    #+#             */
/*   Updated: 2024/06/12 15:45:21 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_SIZE
#  define MAX_SIZE 10240
# endif

# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdio.h>
# include <stddef.h>

char	*get_next_line(int fd);
size_t	gnl_strlen( char *c);
size_t	gnl_strlcpy(char *dst, char *src, size_t dstsize);
char	*gnl_strchr( char *s, int c);
char	*gnl_strjoin(char *s1, char *s2);
size_t	gnl_strlcat(char *dst, char *src, size_t dstsize);
#endif