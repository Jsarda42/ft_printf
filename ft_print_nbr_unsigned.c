/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarda <jsarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:31:30 by jsarda            #+#    #+#             */
/*   Updated: 2023/11/22 12:31:42 by jsarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_nbr_unsigned(int i)
{
	if (i < 0)
	{
		ft_print_char('-');
		i = -i;
	}
	if (i >= 10)
	{
		ft_print_nbr(i / 10);
		ft_print_nbr(i % 10);
	}
	else
		ft_print_char(i + 48);
	return (i);
}
