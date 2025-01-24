#include "my_printf.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putnbr(long int n)
{
	if (n < 0)
	{
		my_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		my_putnbr(n / 10);
		my_putnbr(n % 10);
	}
	else
		my_putchar(n + 48);
}
