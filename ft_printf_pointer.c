/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:55:09 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/25 11:00:37 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstrhex(char *s, int32_t i)
{
	int32_t	j;

	j = i - 1;
	while (j >= 0)
	{
		s[j] = ft_tolower(s[j]);
		write(1, &s[j], 1);
		j--;
	}
}

static int32_t	ft_hex(unsigned long nbr)
{
	unsigned long	q;
	int32_t			temp;
	int32_t			i;
	char			hexa[16];

	i = 0;
	q = nbr;
	while (q != 0)
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
		return (ft_printf_str("(nil)"));
	return (ft_printf_str("0x") + ft_hex((unsigned long)p));
}
