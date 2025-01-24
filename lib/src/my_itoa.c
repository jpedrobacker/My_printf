#include "mylib.h"

static int	my_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static size_t	nstr_size(int n)
{
	size_t	size;

	size = 1;
	if (n < 0)
		++size;
	while (n / 10)
	{
		++size;
		n /= 10;
	}
	return (size);
}

char	*my_itoa(int n)
{
	char	*s;
	int		i;

	s = malloc(sizeof(*s) * (nstr_size(n) + 1));
	if (!s)
		return (NULL);
	if (!n)
		s[0] = '0';
	else if (n < 0)
		s[0] = '-';
	i = nstr_size(n);
	s[i--] = '\0';
	while (n)
	{
		s[i--] = my_abs(n % 10) + 48;
		n /= 10;
	}
	return (s);
}
