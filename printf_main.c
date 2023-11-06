#include "ft_printf.h"

int main(void)
{
	char c = 'c';
	char *s = "teste";
	void *p;
	int x = 10;
	int X = 15;
	int i = -2147483648;
	p = &i;
	long int d = 2147483647;
	int u = 6;

	ft_printf("\n----------------------MEU-------------------\n");
	ft_printf("teste c: %c\n", c);
	ft_printf("teste s: %s\n", s);
	ft_printf("teste p: %p\n", p);
	ft_printf("teste x: %x\n", x);
	ft_printf("teste X: %X\n", X);
	ft_printf("teste i: %i\n", i);
	ft_printf("teste d: %d\n", d);
	ft_printf("teste u: %u\n", u);
	ft_printf("teste f: %%\n");
	ft_printf("\n---------------------Original-------------------\n");
	printf("teste c: %c\n", c);
	printf("teste s: %s\n", s);
	printf("teste p: %p\n", p);
	printf("teste x: %x\n", x);
	printf("teste X: %X\n", X);
	printf("teste i: %i\n", i);
	printf("teste d: %d\n", d);
	printf("teste u: %u\n", u);
	printf("teste f: %%\n");
}
