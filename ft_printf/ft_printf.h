/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojilee <sojilee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:53:11 by sojilee           #+#    #+#             */
/*   Updated: 2022/11/11 13:53:53 by sojilee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_start(const char *format, va_list ap);
int	ft_parse(const char *format, va_list ap);
int	ft_print_char(char c);
int	ft_putchar(va_list ap);
int	ft_print_string(va_list ap);
int	ft_strlen(char *str);
int	ft_print_int(va_list ap);
int	ft_convert_int(int nbr);
int	ft_print_unsigned_int(unsigned int nbr);
int	ft_print_hex(va_list ap, char x);
int	ft_convert_hex(char *base, unsigned long long dec);
int	ft_print_addr(va_list ap);

#endif
