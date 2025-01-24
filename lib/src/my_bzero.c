#include "mylib.h"

void	my_bzero(void *str, size_t n)
{
	if (n != 0)
		my_memset(str, '\0', n);
}
