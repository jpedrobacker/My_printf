/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:50:20 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/22 11:50:20 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	check_types(va_list args, const char format)
{
	int	i;

	i = 0;

	if (format == 'c')
		i += ft_printf_char(va_arg(args, int));
	else if (format == 's')
		i += ft_printf_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		i += ft_print_nbr(va_arg(args, int));
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		p;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			p += check_types(args, format[i + 1]);
			i++;
		}
		else
			p += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (p);
}

int main(void)
{
	char i = 'c';
	ft_printf("ola %c", i);
}
