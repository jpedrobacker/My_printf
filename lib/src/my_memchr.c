#include "mylib.h"

void	*my_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
