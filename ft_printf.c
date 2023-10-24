/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:50:20 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/23 16:10:05 by jbergfel         ###   ########.fr       */
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
	else if (format == 'p')
		i += ft_printf_pointer(va_arg(args, size_t));
	else if (format == 'd' || format == 'i')
		i += ft_printf_nbr(va_arg(args, long int));
	else if (format == 'u')
		i += ft_printf_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		i += ft_printf_hexadecimal(va_arg(args, unsigned int), format);
	else if (format == '%')
		i += ft_printf_percent();
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
	char c = 'c';
	char *s = "teste";
	int p = 12314;
	int x = 10;
	int X = 15;
	int i = -20;
	int d = 412;
	int u = 41286;
	char f = 'f';

	ft_printf("teste c: %c\n", c);
	ft_printf("teste s: %s\n", s);
	ft_printf("teste p: %p\n", p);
	ft_printf("teste x: %x\n", x);
	ft_printf("teste X: %X\n", X);
	ft_printf("teste i: %i\n", i);
	ft_printf("teste d: %d\n", d);
	ft_printf("teste u: %u\n", u);
	ft_printf("teste f: %%\n", f);
}
