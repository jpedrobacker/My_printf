#include "my_printf.h"

int	my_printf_nbr(long int n)
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
	my_putnbr(n);
	return (i);
}
