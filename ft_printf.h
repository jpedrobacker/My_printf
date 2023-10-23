/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:04:02 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/23 13:02:03 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <strings.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_printf_char(int c);
int	ft_printf_nbr(int n);
int	ft_printf_str(char *s);
int	ft_printf_unsigned(unsigned int n);
int	ft_printf_pointer(unsigned long long p);
int	ft_printf_percent(void);
int	ft_printf_hexadecimal(unsigned int n, char format);

#endif
