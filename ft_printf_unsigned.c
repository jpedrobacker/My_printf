/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:39:00 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/23 13:43:47 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(long int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int	ft_printf_unsigned(unsigned int n)
{
	int	i;
	int l;
	unsigned int nbr;

	i = (int) n;
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		l++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		l++;
	}
	ft_putnbr(n);
	return(l);
}
