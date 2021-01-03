#include <stdarg.h>
#include "Libft/libft.h"
//#include <fcntl.h>
//#include <stdlib.h>
//#include <string.h>

int ft_sort_flags(char **line, int counter, va_list *args)
{
	if (*line == '-')
	{
		//minus = 1;
		*(*line)++;
	}
	if (*line == '0')
	{
		//null = 1;
		*(*line)++;
	}
	if (*line == '.')
	{
		//period = 1;
		*(*line)++;
	}
	if (*line == '*')
	{
		//asterisk = 1;
		*(*line)++;
	}
	*(*line)++;
	counter++;
    return (1);
}

int ft_handle_text(char **line, int counter, va_list *args)
{

}

int ft_handle_numbers(char **line, int counter, va_list *args)
{

}

int ft_printf(const char *line, ...)
{
    va_list args;
    int		output;

    output = 0;
    va_start(args, line);
    while (*line)
    {
        if (*line == '%')
        	if (ft_sort_flags(&line, output, &args) < 0)
        		return (-1);
        else
		{
			if (ft_putchar(*line) < 0)
				return (-1);
			*line++;
			output++;
		}
    }
    va_end(args);
    return (output);
}

//printf("%d\n", *args);
//letter = (char*)va_arg(args, int);