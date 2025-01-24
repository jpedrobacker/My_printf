#include "mylib.h"

char	*my_substr(const char *src, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	dst = (char *)malloc(sizeof(*src) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (src[i])
	{
		if (i >= start && j < len)
		{
			dst[j] = src[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	return (dst);
}
