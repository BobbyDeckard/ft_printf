/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_up_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:56:08 by imeulema          #+#    #+#             */
/*   Updated: 2024/10/25 13:36:22 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

static void	ft_putnbr_hex_printf(unsigned int n, int *ptr, char *base)
{
	char	c;

	if (n >= 16)
	{
		ft_putnbr_hex_printf(n / 16, ptr, base);
		n %= 16;
	}
	if (n < 16)
	{
		c = base[n];
		write(1, &c, 1);
		(*ptr)++;
	}
}

void	hex_up_conversion(va_list *args, int *ptr)
{
	char	base[17];

	ft_strlcpy(base, "0123456789ABCDEF", 17);
	ft_putnbr_hex_printf(va_arg(*args, long), ptr, base);
}
