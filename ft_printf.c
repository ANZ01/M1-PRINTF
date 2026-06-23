/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaurici <dmaurici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:52:26 by dmaurici          #+#    #+#             */
/*   Updated: 2026/06/23 15:06:14 by dmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	conversion_reader(char symbol)
{
	if (symbol == 'c')
		ft_putchar()
}
int ft_printf(const char *format, ...)
{
	unsigned int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
		count += conversion_reader(*format + 1);
			format++;
		}	
		else
			count += ft_putchar(*format);	
		format++;
	}
	return (count);
}