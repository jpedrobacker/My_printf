#include "mylib.h"

size_t	my_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = my_strlen(dst);
	srclen = my_strlen(src);
	if (size == 0)
		return (srclen);
	if (dstlen > size)
		return (srclen + size);
	while (src[i] && dstlen + i < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
