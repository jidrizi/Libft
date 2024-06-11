/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coolfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:42:21 by jidrizi           #+#    #+#             */
/*   Updated: 2024/04/10 01:42:58 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putchar(int c)
{
	return (write(1, &c, 1));
}

static int	putnum(unsigned int x)
{
	int	y;

	y = 0;
	if (x >= 10)
		y += putnum (x / 10);
	y += putchar ((x % 10) + '0');
	return (y);
}

int	put_unsigned(unsigned int z)
{
	int	x;

	x = 0;
	if (z == 0)
	{
		x += putchar('0');
		return (x);
	}
	else
	{
		x += putnum(z);
		return (x);
	}
}

int	putstr(char *c)
{
	int	x;

	x = 0;
	if (!c)
	{
		x += write (1, "(null)", 6);
		return (x);
	}
	while (*c)
	{
		x += putchar(*c);
		c++;
	}
	return (x);
}
