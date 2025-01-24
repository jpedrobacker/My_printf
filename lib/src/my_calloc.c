#include "mylib.h"

void	*my_calloc(size_t nitems, size_t size)
{
	char			*dst;
	unsigned int	total;
	unsigned int	i;

	total = nitems * size;
	dst = malloc(total);
	if (!dst)
		return (NULL);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
