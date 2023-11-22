/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarda <jsarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:47:28 by jsarda            #+#    #+#             */
/*   Updated: 2023/11/22 17:30:17 by jsarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int i)
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
