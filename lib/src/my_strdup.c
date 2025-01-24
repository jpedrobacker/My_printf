#include "mylib.h"

char	*my_strdup(const char *src)
{
	int		j;
	char	*dst;

	j = 0;
	dst = malloc(my_strlen(src) + 1);
	if (!dst)
		return (0);
	while (src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
