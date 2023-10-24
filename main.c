#include "ft_printf.h"

int main(void)
{
	char c = 'c';
	char *s = "teste";
	int p = 12314;
	int x = 10;
	int X = 15;
	int i = -20;
	int d = 412;
	int u = 41286;
	char f = 'f';

	ft_printf("teste c: %c\n", c);
	ft_printf("teste s: %s\n", s);
	ft_printf("teste p: %p\n", p);
	ft_printf("teste x: %x\n", x);
	ft_printf("teste X: %X\n", X);
	ft_printf("teste i: %i\n", i);
	ft_printf("teste d: %d\n", d);
	ft_printf("teste u: %u\n", u);
	ft_printf("teste f: %%\n", f);
}
