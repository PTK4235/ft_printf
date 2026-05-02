/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 16:00:57 by ptran             #+#    #+#             */
/*   Updated: 2026/05/02 15:28:32 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*cur;
	size_t	count;

	count = 0;
	va_start(args, format);
	while (format != NULL)
	{
		cur = ft_strchr(format,'%');
		if (cur && cur[1])
		{
			write(1, format, cur - format);
			count += cur - format + get_value(cur[1], args);
			format = cur + 2;
		}
		else
		{
			write(1, format, ft_strlen(format));
			count += ft_strlen(format);
			format = NULL;
		}
	}
	va_end(args);
	return (count);
}
