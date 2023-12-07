/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:03:24 by ael-fagr          #+#    #+#             */
/*   Updated: 2023/12/06 19:26:03 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long value)
{
	int		i;
	char	*str;

	str = "0123456789abcdef";
	i = 0;
	if (value >= 16)
	{
		i += ft_print_hex(value / 16);
		i += ft_print_hex(value % 16);
	}
	else
		i += ft_putchar(str[value]);
	return (i);
}
