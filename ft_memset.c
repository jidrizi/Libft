/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:17:39 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/07 14:11:49 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*charconversiontherapy;
	size_t			scan;

	scan = 0;
	charconversiontherapy = (unsigned char *)b;
	while (scan < len)
	{
		charconversiontherapy[scan] = c;
		scan++;
	}
	return (b);
}

//int main() {
//    char str[20] = "Hello, World!";
//    printf("Before memset: %s\n", str);
//
//    // Test our implementation of ft_memset
//    ft_memset(str + 7, '*', 5);
//    printf("After ft_memset: %s\n", str);
//
//    // Test with memset from the standard library
//    char str2[20] = "Hello, World!";
//    memset(str2 + 7, '*', 5);
//    printf("After memset: %s\n", str2);
//
//    return 0;
//}