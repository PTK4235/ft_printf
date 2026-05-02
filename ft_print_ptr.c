/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:32:01 by ptran             #+#    #+#             */
/*   Updated: 2026/05/02 16:32:14 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(va_list args)
{
	size_t		n;

	n = va_arg(args, uintptr_t);
	write(1, "0x", 2);
	return (2 + ft_putnbr_base(n,"0123456789abcdef"));
}