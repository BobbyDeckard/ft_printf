/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:33:57 by imeulema          #+#    #+#             */
/*   Updated: 2024/10/25 13:33:36 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	address_conversion(va_list *args, int *ptr);
void	char_conversion(va_list *args, int *ptr);
void	dec_nbr_conversion(va_list *args, int *ptr);
void	ft_putuns_printf(unsigned int n, int *ptr);
void	hex_lo_conversion(va_list *args, int *ptr);
void	hex_up_conversion(va_list *args, int *ptr);
void	string_conversion(va_list *args, int *ptr);

#endif
