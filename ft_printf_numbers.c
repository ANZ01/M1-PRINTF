/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaurici <dmaurici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:52:20 by dmaurici          #+#    #+#             */
/*   Updated: 2026/06/24 16:05:45 by dmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
	int len;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if(n < 0)
	{
	write(1, "-", 1);
	
	}
	
	return (0);
}
int	ft_put_unsigned(unsigned int n)
{
	(void) n;
	return (0);
}
