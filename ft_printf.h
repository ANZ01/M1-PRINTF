/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaurici <dmaurici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:54:17 by dmaurici          #+#    #+#             */
/*   Updated: 2026/06/24 12:59:15 by dmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_strlen(char *str);

int	ft_putnbr(int n);
int	ft_put_unsigned(unsigned int n);
int	ft_puthex(unsigned long n, char *num);
int	ft_putptr(void *ptr);

#endif