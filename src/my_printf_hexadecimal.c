#include "my_printf.h"

static void	my_putstrhex(char *s, int i, char format)
{
	int	j;

	if (format == 'x')
	{
		j = i - 1;
		while (j >= 0)
		{
			if (s[j] >= 65 && s[j] <= 90)
				s[j] += 32;
			j--;
		}
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &s[j], 1);
		j--;
	}
}

int	my_printf_hexadecimal(unsigned int n, char format)
{
	long int	q;
	long int	temp;
	int			i;
	char		hexa[16];

	i = 0;
	q = n;
	if (n == 0)
	{
		my_putnbr(n);
		return (1);
	}
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
	my_putstrhex(hexa, i, format);
	return (i);
}
