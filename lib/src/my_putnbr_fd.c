#include "mylib.h"

void	my_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		my_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		my_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		my_putnbr_fd(n / 10, fd);
		my_putnbr_fd(n % 10, fd);
	}
	else
		my_putchar_fd(n + 48, fd);
}
