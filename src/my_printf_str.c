#include "my_printf.h"

int	my_printf_str(char *s)
{
	int	i;

	if (!s)
		return (my_printf_str("(null)"));
	i = 0;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
	return (i);
}
