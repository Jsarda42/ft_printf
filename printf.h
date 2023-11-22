#ifndef	PRINTF_H
# define	PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_eval_format(va_list args, const char format)
int	ft_print_str(char *str);
int	ft_print_char(char c);
int	ft_print_nbr(int i);
int	ft_print_nbr_unsigned(int i);

#endif
