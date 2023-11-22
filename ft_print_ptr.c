/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarda <jsarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:47:47 by jsarda            #+#    #+#             */
/*   Updated: 2023/11/22 17:30:25 by jsarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)
{
	char	str[20];
	char	*base_character;
	int		len;
	int		i;

	base_character = "0123456789abcdef";
	i = 0;
	len = 0;
	write(1, "0x", 2);
	if (ptr == 0)
	{
		ft_print_char('0');
		return (len);
	}
	while (ptr != 0)
	{
		str[i++] = base_character[ptr % 16];
		ptr = ptr / 16;
	}
	while (i--)
	{
		ft_print_char(str[i]);
		len++;
	}
	return (len);
}
