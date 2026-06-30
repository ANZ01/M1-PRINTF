/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaurici <dmaurici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:52:26 by dmaurici          #+#    #+#             */
/*   Updated: 2026/06/24 15:24:28 by dmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_conversion(char symbol, va_list args)
{
	if (symbol == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	if (symbol == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (symbol == '%')
		return (ft_putchar('%'));
	return (-1);
}
int ft_printf(const char *format, ...)
{
	int		len;
	int		check;
	va_list	args;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			check = ft_conversion(*++format, args);
			if(check == -1)
				return (-1);
			len += check;
		}
		else
			len +=ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
