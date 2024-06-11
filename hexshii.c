/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexshii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:49:59 by jidrizi           #+#    #+#             */
/*   Updated: 2024/04/10 01:53:51 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr(int x)
{
	int		y;
	char	nbr;

	y = 0;
	if (x == -2147483648)
		y += write (1, "-2147483648", 11);
	else
	{
		if (x < 0)
		{
			y += write (1, "-", 1);
			x = -x;
		}
		if (x >= 10)
		{
			y += putnbr(x / 10);
			y += putnbr(x % 10);
		}
		else
		{
			nbr = x + '0';
			y += write (1, &nbr, 1);
		}
	}
	return (y);
}

int	hex_conversion_therapy(unsigned long int x, char *hexbase)
{
	int	y;

	y = 0;
	if (x >= 16)
	{
		y += hex_conversion_therapy (x / 16, hexbase);
		putchar (hexbase[x % 16]);
	}
	else
		putchar (hexbase[x % 16]);
	if (y == -1)
		return (-1);
	y++;
	return (y);
}

int	makehex(unsigned long int x, const char string)
{
	int	y;

	y = 0;
	if (string == 'x')
		y += hex_conversion_therapy(x, "0123456789abcdef");
	if (string == 'X')
		y += hex_conversion_therapy(x, "0123456789ABCDEF");
	return (y);
}

int	put_ptr(void *ptr)
{
	int	x;

	x = 0;
	x += write (1, "0x", 2);
	x += hex_conversion_therapy ((unsigned long )ptr, "0123456789abcdef");
	return (x);
}
