/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 05:29:25 by ael-fagr          #+#    #+#             */
/*   Updated: 2023/12/06 19:27:45 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_format(char sp, va_list ap)
{
	int	i;

	i = 0;
	if (sp == 'd' || sp == 'i')
		i += ft_putnbr(va_arg(ap, int));
	else if (sp == 's')
		i += ft_putstr(va_arg(ap, char *));
	else if (sp == 'p')
	{
		i += ft_putstr("0x");
		i += ft_print_hex((unsigned long)va_arg(ap, void *));
	}
	else if (sp == 'x')
		i += ft_print_hex((unsigned int)va_arg(ap, unsigned int));
	else if (sp == 'X')
		i += ft_print_hex_u((unsigned int)va_arg(ap, unsigned int));
	else if (sp == 'u')
		i += ft_put_u(va_arg(ap, unsigned int));
	else if (sp == 'c')
		i += ft_putchar(va_arg(ap, int));
	else
		i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			i += printf_format(*(format), ap);
		}
		else
			i += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (i);
}
