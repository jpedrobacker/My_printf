#include "my_printf.h"

static void	my_putstrhex(char *s, int i)
{
	int	j;

	j = i - 1;
	while (j >= 0)
	{
		s[j] = my_tolower(s[j]);
		write(1, &s[j], 1);
		j--;
	}
}

static int	my_hex(unsigned long nbr)
{
	unsigned long	q;
	int				temp;
	int				i;
	char			hexa[16];

	i = 0;
	q = nbr;
	while (q != 0)
	{
		temp = q % 16;
		if (temp < 10)
			temp += 48;
		else
			temp += 55;
		hexa[i++] = temp;
		q /= 16;
	}
	my_putstrhex(hexa, i);
	return (i);
}

int	my_printf_pointer(size_t p)
{
	if (!p)
		return (my_printf_str("(nil)"));
	return (my_printf_str("0x") + my_hex((unsigned long)p));
}
