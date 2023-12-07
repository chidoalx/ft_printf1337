/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 06:16:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2023/12/06 19:24:33 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_u(unsigned int value)
{
	int		i;
	char	*str;

	i = 0;
	str = "0123456789ABCDEF";
	if (value >= 16)
	{
		i += ft_print_hex_u(value / 16);
		i += ft_print_hex_u(value % 16);
	}
	else
		i += ft_putchar(str[value]);
	return (i);
}
