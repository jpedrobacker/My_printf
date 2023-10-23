/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:29:16 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/23 11:38:44 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
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

int	ft_print_nbr(int n)
{
	long int	nbr;
	int			i;

	nbr = n;
	i = 1;
	if (n < 0)
	{
		nbr = -n;
		i++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	ft_putnbr(n);
	return (i);
}

/*
int main(void)
{
	printf("\n%d",ft_print_nbr(-10));
}
*/
