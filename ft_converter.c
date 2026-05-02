/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:50:58 by ptran             #+#    #+#             */
/*   Updated: 2026/05/02 16:35:42 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_value(char conv, va_list args)
{
	int	i;
	t_entry	dict[] = {
		{'c', &print_character},
		{'s', &print_string},
		{'p', &print_pointer},
		{'d', &print_decimal},
		{'i', &print_decimal},
		{'u', &print_decimal},
		{'x', &print_lower_hexadecimal},
		{'X', &print_upper_hexadecimal},
		{'%', &print_percent},
		{0, NULL}
	};

	i = 0;
	while (dict[i].key != 0 && dict[i].key != conv)
	{
		i++;
	}
	return ((dict[i].f)(args));
}
