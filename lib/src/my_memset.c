#include "mylib.h"

void	*my_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)b;
	while (i < len)
	{
		s[i++] = (unsigned char)c;
	}
	return (s);
}
