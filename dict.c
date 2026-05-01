/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:50:58 by ptran             #+#    #+#             */
/*   Updated: 2026/05/01 11:50:49 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_value(char conv, va_list args)
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


int	print_character(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	print_string(va_list args)
{
	char	*str;
	size_t	len;

	str = va_arg(args, char *);
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
int	print_pointer(va_list args) // TODO
{
	return 1;

	//return (ft_putnbr_base(va_arg(args, int),"123456789abcdef"));
}
int	print_decimal(va_list args)
{
	int		n;

	n = va_arg(args, int);
	return 1;
	//return (ft_putnbr_fd(n, 1));
}

int	print_unsigned_decimal(va_list args)
{
	return 1;

	//return (ft_putnbr_fd(va_arg(args, unsigned int), 1));
}
int	print_lower_hexadecimal(va_list args)
{
	return 1;

	//return (ft_putnbr_base(va_arg(args, int),"123456789abcdef"));
}
int	print_upper_hexadecimal(va_list args)
{
	return 1;

	//return (ft_putnbr_base(va_arg(args, int),"123456789ABCDEF"));
}

int	print_percent(va_list args)
{
	(void) args;
	write(1,"%",1);
	return (1);
}
