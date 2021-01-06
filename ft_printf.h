
#ifndef FT_PRINTF_FT_PRINTF_H
#define FT_PRINTF_FT_PRINTF_H

typedef struct	s_flags
{
	int			minus;
	int 		precision;
	int 		zero;
	int 		width;
}				t_flags;

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

void 	ft_add_minus(char **line, t_flags *flags);
void 	ft_add_width(char **line, t_flags *flags);
void 	ft_add_unspecified_width(va_list args, char **line, t_flags *flags);
void	ft_add_precision(va_list args, char **line, t_flags *flags);
int		ft_isdigit(int c);
int		ft_istype(int c);
int		ft_isflag(int c);
int		ft_handle_numbers(char **line, va_list args, char **out);
int		ft_handle_text(char **line, va_list args, t_flags flags, char **out);
int		ft_putchar(char c);
t_flags	ft_init_flags(void);
int		ft_sort_flags(char **line, va_list args, t_flags *flags, char **out);
void	ft_strjoin(char **s1, char const *s2);
int		ft_print_char(va_list args, t_flags flags, char **line);
int 	ft_print_width(int width, int len, int zero, char **line);
void	ft_putstr(char *s);

#endif
