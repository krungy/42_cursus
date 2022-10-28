#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_start(const char *format, va_list ap);
int	ft_parse(const char *format, va_list ap);
int	ft_print_char(int c);
int	ft_print_string(char *str);
int	ft_print_number(int nbr);

#endif