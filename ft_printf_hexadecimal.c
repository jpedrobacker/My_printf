/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:56:46 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/25 10:08:47 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstrhex(char *s, int i, char format)
{
	int	j;
	int	k;

	k = 0;
	j = i - 1;
	if (format == 'x')
	{
		while (s[k])
		{
			if (s[k] >= 65 && s[k] <= 90)
				s[k] += 32;
			k++;
		}
	}
	while (j >= 0)
	{
		write(1, &s[j], 1);
		j--;
	}
}

int	ft_printf_hexadecimal(unsigned int n, char format)
{
	long int	q;
	long int	temp;
	int			i;
	char		hexa[16];

	i = 0;
	q = n;
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
	ft_putstrhex(hexa, i, format);
	return (i);
}
