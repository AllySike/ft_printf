/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:13:42 by kgale             #+#    #+#             */
/*   Updated: 2021/01/13 17:24:53 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FT_PRINTF_H
# define FT_PRINTF_FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct			s_flags
{
	int					minus;
	int					precision;
	int					precisionset;
	int					zero;
	int					width;
}						t_flags;

void					ft_add_minus(char **line, t_flags *flags);
void					ft_add_width(char **line, t_flags *flags);
void					ft_add_unspecified_width(va_list *args, char **line,
		t_flags *flags);
void					ft_add_precision(va_list *args,
		char **line, t_flags *flags);
int						ft_isdigit(int c);
int						ft_istype(int c);
int						ft_isflag(int c);
int						ft_handle_numbers(char **line, va_list *args,
		t_flags flags, char **out);
int						ft_handle_text(char **line, va_list *args,
		t_flags flags, char **out);
int						ft_putchar(char c);
t_flags					ft_init_flags(void);
int						ft_sort_flags(char **line, va_list *args,
		t_flags *flags, char **out);
void					ft_strjoin(char **s1, char const *s2);
int						ft_print_char(va_list *args, t_flags flags,
		char **line);
void					ft_putstr(char *s);
int						ft_print_defined_char(char c, t_flags flags,
		char **line);
int						ft_print_int(va_list *args, t_flags flags, char **line);
int						ft_strlen(const char *str);
int						ft_max(int a, int b);
void					ft_putstr(char *s);
int						ft_print_string(va_list *args,
		t_flags flags, char **line);
char					*ft_strdup(const char *s1);
int						ft_print_width(int width, int len, int zero,
		char **line);
int						ft_check_specifier(char *line);
int						ft_print_chars(char **line, char **out);
int						ft_int_flags(t_flags *flags, char **mass, int i);
char					*ft_itoa(int n);
int						ft_handle_int_flags(t_flags flags,
		char **line, int i, char **mass);
void					ft_strjoin_n(char **s1, char const *s2, t_flags flags);
int						ft_put_percent(char **line, t_flags flags, char **out);
unsigned int			ft_print_u(va_list *args, t_flags flags, char **line);
int						ft_u_flags(t_flags *flags, char **mass, unsigned int i);
char					*ft_utoa(unsigned int n);
int						ft_handle_u_flags(t_flags flags,
		char **line, char **mass, unsigned int i);
int						ft_handle_x_flags(t_flags flags,
		char **line, unsigned int i, int x);
int						ft_x_flags(t_flags *flags,
		char **mass, unsigned int i, int x);
int						ft_print_x(va_list *args,
		t_flags flags, char **line, int x);
unsigned long long int	ft_print_p(va_list *args, t_flags flags, char **line);
int						ft_p_flags(t_flags *flags,
		char **mass, unsigned long long int i);
int						ft_handle_p_flags(t_flags flags,
		char **line, char **mass, unsigned long long int i);

#endif
