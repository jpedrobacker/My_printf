#include "my_printf.h"

int	my_printf_unsigned(unsigned int n)
{
	int				l;
	unsigned int	nbr;

	nbr = n;
	l = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		l++;
	}
	my_putnbr(n);
	return (l);
}
