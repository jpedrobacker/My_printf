/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:55:09 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/23 16:09:48 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int32_t	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int32_t	ft_putstrhex(char *s, int32_t i)
{
	int32_t	j;

	j = i - 1;
	while (j >= 0)
	{
		write(1, &s[j], 1);
		j--;
	}
}

static int32_t ft_putstr(char *s)
{
	int32_t i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

static int32_t	ft_hex(uint64_t nbr)
{
	int32_t		q;
	int32_t		temp;
	int32_t		i;
	char		hexa[16];

	i = 0;
	q = nbr;
	while(q != 0)
	{
		temp = q % 16;
		if (temp < 10)
			temp += 48;
		else
			temp += 55;
		hexa[i++] = temp;
		q /= 16;
	}
	ft_putstrhex(hexa, i);
	return (i);
}

int	ft_printf_pointer(size_t p)
{
	if (!p)
		return (ft_putstr("(null)"));
	return (ft_putstr("0x") + ft_hex((uint64_t)p));
}
