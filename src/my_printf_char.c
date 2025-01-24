#include "my_printf.h"

int	my_printf_char(int c)
{
	write(1, &c, 1);
	return (1);
}
