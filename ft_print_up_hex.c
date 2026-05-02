/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_up_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 16:35:18 by ptran             #+#    #+#             */
/*   Updated: 2026/05/02 16:35:28 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_upper_hexadecimal(va_list args)
{
	unsigned int		n;

	n = va_arg(args, unsigned int);
	return (ft_putnbr_base(n,"0123456789ABCDEF"));
}