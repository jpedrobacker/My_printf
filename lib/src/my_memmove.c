#include "mylib.h"

void	*my_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*dsrc;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (my_memcpy(dst, src, len));
	dest = (unsigned char *)dst;
	dsrc = (unsigned char *)src;
	while (len > 0)
	{
		dest[len - 1] = dsrc[len - 1];
		len--;
	}
	return (dst);
}
