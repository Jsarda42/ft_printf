#ifndef	PRINTF_H
# define	PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_eval_format(char *lst, const char *format, int i);
int	ft_print_str(char *str);
int	ft_print_char(char c);
int	ft_print_nbr(int i);
int	ft_print_nbr_unsigned(int i);

#endif
