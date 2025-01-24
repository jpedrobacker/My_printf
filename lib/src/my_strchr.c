#include "mylib.h"

char	*my_strchr(const char *str, int c)
{
	int		i;
	char	*stri;

	stri = (char *)str;
	i = 0;
	while (stri[i] != c)
	{
		if (stri[i] == '\0')
			return (0);
		i++;
	}
	return (stri + i);
}
