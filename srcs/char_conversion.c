/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:42:55 by imeulema          #+#    #+#             */
/*   Updated: 2024/10/25 13:10:56 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

void	char_conversion(va_list *args, int *ptr)
{
	ft_putchar_fd(va_arg(*args, int), 1);
	(*ptr)++;
}
