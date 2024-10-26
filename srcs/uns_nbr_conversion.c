/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_nbr_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:41:18 by imeulema          #+#    #+#             */
/*   Updated: 2024/10/25 13:14:22 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

void	ft_putuns_printf(unsigned int n, int *ptr)
{
	char	c;

	c = 0;
	if (n >= 10)
	{
		ft_putuns_printf(n / 10, ptr);
		n %= 10;
	}
	if (n < 10)
	{
		c = (char) n + 48;
		write(1, &c, 1);
		(*ptr)++;
	}
}
