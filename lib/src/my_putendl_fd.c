#include "mylib.h"

void	my_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		my_putchar_fd(s[i++], fd);
	my_putchar_fd('\n', fd);
}
