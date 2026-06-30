/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TESTER.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaurici <dmaurici@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:23:54 by dmaurici          #+#    #+#             */
/*   Updated: 2026/06/24 15:41:29 by dmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// clang -Wall -Werror -Wextra -g TESTER.c ft_printf.c ft_printf_utils.c ft_printf_number.c

int main(void)
{
	int INT_MIN = -2147483648;
	/*unsigned int i, u;
	char C = 'D', S[10] = "AMAZING";
	char s[100] = "HELLO %s WORLD!\n";

	printf("\nFT_PRINTF:\n\t");
	i = ft_printf(s, S, C);
	printf("\t\nPRINTF:\n\t");
	u = printf(s, S, C);
	
	printf("\n\nFT N RESULTS = %d\n", i);
	printf("NORMAL N RESULTS = %d\n\n", u);
	return (0);*/
	printf("%d", INT_MIN);
}
