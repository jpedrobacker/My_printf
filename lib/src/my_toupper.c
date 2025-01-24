#include "mylib.h"

int	my_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
