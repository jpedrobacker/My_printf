#include "mylib.h"

char	*my_strrchr(const char *str, int c)
{
	int		i;
	char	*stri;

	stri = (char *)str;
	i = my_strlen(stri);
	while (i >= 0)
	{
		if (stri[i] == c)
			return (stri + i);
		i--;
	}
	return (0);
}
