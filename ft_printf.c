/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 16:00:57 by ptran             #+#    #+#             */
/*   Updated: 2026/04/23 11:39:05 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*before;
	char	*cur;
	size_t	count;

	count = 0;
	va_start(args, format);
	before = (char *)format;
	cur = (char *)format;
	while (cur != NULL)
	{
		cur = ft_strpbrk(cur, "cspdiuxX%");
		if (cur)
		{
			count += cur - before - 2;
			write(1, before, cur - before - 2);
			get_value(cur[0], args);
			before = cur;
		}
	}
	va_end(args);
	return (1); // a refaire return value
}
