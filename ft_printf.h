/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:31:45 by ael-fagr          #+#    #+#             */
/*   Updated: 2023/12/06 19:36:41 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_print_hex(unsigned long value);

int	ft_print_hex_u(unsigned int value);

int	ft_putchar(char c);

int	ft_putstr(char *s);

int	ft_putnbr(int n);

int	ft_put_u(unsigned int n);

#endif
