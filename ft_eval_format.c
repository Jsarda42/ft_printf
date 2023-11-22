/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarda <jsarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:09:26 by jsarda            #+#    #+#             */
/*   Updated: 2023/11/22 13:19:02 by jsarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_eval_format(const char *format, int i)
{
	int	pos;
	int	len;

	pos = i;
	len = 0;
	if (format[pos] == 'c')
		len = len + ft_print_char(format);
	else if (format[pos] == 's')
		len = len + ft_print_str(format);
	else if (format[pos] == 'p')
		len = len + ft_print_adress(format);
	else if (format[pos] == 'd' || format[pos] == 'i')
		len = len + ft_print_nbr(format);
	else if (format[pos] == 'u')
		len = len + ft_print_nbr_unsigned(format);
	else if (format[pos] == 'x' || format[pos] == 'X')
		len = len + ft_print_nbr_hexa(format);
	else if (format[pos] == '%')
		write(1, '%', 1);
	return (len);
}
