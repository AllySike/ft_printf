/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:13:42 by kgale             #+#    #+#             */
/*   Updated: 2021/01/09 19:13:51 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FT_PRINTF_H
#define FT_PRINTF_FT_PRINTF_H

typedef struct	s_flags
{
	int			minus;
	int 		precision;
	int         precisionset;
	int 		zero;
	int 		width;
}				t_flags;

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

void 	ft_add_minus(char **line, t_flags *flags);
void 	ft_add_width(char **line, t_flags *flags);
void 	ft_add_unspecified_width(va_list *args, char **line, t_flags *flags);
void	ft_add_precision(va_list *args, char **line, t_flags *flags);
int		ft_isdigit(int c);
int		ft_istype(int c);
int		ft_isflag(int c);
int		ft_handle_numbers(char **line, va_list *args, t_flags flags, char **out);
int		ft_handle_text(char **line, va_list *args, t_flags flags, char **out);
int		ft_putchar(char c);
t_flags	ft_init_flags(void);
int		ft_sort_flags(char **line, va_list *args, t_flags *flags, char **out);
void	ft_strjoin(char **s1, char const *s2);
int		ft_print_char(va_list *args, t_flags flags, char **line);
void	ft_putstr(char *s);
int 	ft_print_defined_char(char c, t_flags flags, char **line);
int 	ft_print_int(va_list *args, t_flags flags, char **line);
int		ft_strlen(const char *str);
int 	ft_max(int a, int b);
void	ft_putstr(char *s);
int 	ft_print_string(va_list *args, t_flags flags, char **line);
char	*ft_strdup(const char *s1);
int 	ft_print_width(int width, int len, int zero, char **line);
int     ft_check_specifier(char *line);
int     ft_print_chars(char **line, char **out);
int     ft_int_flags(t_flags *flags, char **mass, int i);
char	*ft_itoa(int n);
int		ft_handle_int_flags(t_flags flags, char **line, int i, char **mass);

#endif
