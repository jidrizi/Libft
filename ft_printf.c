/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:04:23 by jidrizi           #+#    #+#             */
/*   Updated: 2024/04/10 01:33:14 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_handler(va_list arguments, const char *str)
{
	if (*str == '\0')
		return (-1);
	if (*str == 'c')
		return (putchar(va_arg(arguments, int)));
	if (*str == 's')
		return (putstr(va_arg(arguments, char *)));
	if (*str == 'd' || *str == 'i')
		return (putnbr(va_arg(arguments, int)));
	if (*str == 'u')
		return (put_unsigned(va_arg (arguments, unsigned int)));
	if (*str == '%')
		return (write (1, "%", 1));
	if (*str == 'X' || *str == 'x')
		return (makehex(va_arg(arguments, unsigned int), *str));
	if (*str == 'p')
		return (put_ptr(va_arg(arguments, void *)));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		x;
	va_list	arguments;

	va_start (arguments, str);
	x = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			x += print_handler(arguments, str);
		}
		else
			x += write (1, str, 1);
		str++;
	}
	va_end(arguments);
	return (x);
}
