/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 16:01:02 by ptran             #+#    #+#             */
/*   Updated: 2026/05/01 13:13:12 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft_extend/libft_extend.h"
#include <stdarg.h>
#include <stddef.h>

typedef struct s_entry
{
	char	key;
	int		(*f)(va_list args);
}			t_entry;

int			ft_printf(const char *format, ...);

int			get_value(char conv, va_list args);
int			print_character(va_list args);
int			print_string(va_list args);
int			print_pointer(va_list args);
int			print_decimal(va_list args);
int			print_unsigned_decimal(va_list args);
int			print_lower_hexadecimal(va_list args);
int			print_upper_hexadecimal(va_list args);
int			print_percent(va_list args);