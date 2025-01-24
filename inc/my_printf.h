#ifndef MY_PRINTF_H
# define MY_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <strings.h>
# include <limits.h>
# include <stdint.h>
# include "../lib/inc/mylib.h"

int		my_printf(const char *format, ...);
int		my_printf_char(int c);
int		my_printf_nbr(long int n);
int		my_printf_str(char *s);
int		my_printf_unsigned(unsigned int n);
int		my_printf_pointer(size_t p);
int		my_printf_percent(void);
int		my_printf_hexadecimal(unsigned int n, char format);

//Utilities

void	my_putchar(char c);
void	my_putnbr(long int n);

#endif
