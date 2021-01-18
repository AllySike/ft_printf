/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 05:42:31 by kgale             #+#    #+#             */
/*   Updated: 2021/01/18 10:00:01 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_flags(char **line, va_list *args, t_flags *flags)
{
	int counter;

	counter = 0;
	while (*line && **line)
	{
		if (!ft_istype(**line) && !ft_isdigit(**line) && !ft_isflag(**line))
			return (0);
		if ((char)**line == '-')
			ft_add_minus(&(*line), flags);
		if ((char)**line == '0' && !(*flags).minus)
		{
			(*flags).zero = 1;
			(*line)++;
		}
		if ((char)**line == '*')
			ft_add_unspecified_width(&(*args), &(*line), flags);
		if ((char)**line == '.')
			ft_add_precision(&(*args), &(*line), flags);
		if (ft_isdigit(**line))
			ft_add_width(&(*line), flags);
		if (ft_istype(**line))
			return (ft_handle_text(&(*line), &(*args), *flags));
	}
	return (counter);
}

int	ft_handle_text(char **line, va_list *args, t_flags flags)
{
	if (**line == 'c')
	{
		(*line)++;
		return (ft_print_char(&(*args), flags));
	}
	else if (**line == 's')
	{
		(*line)++;
		return (ft_print_string(&(*args), flags));
	}
	else if (**line == '%')
		return (ft_put_percent(&(*line), flags));
	else if (**line == 'p')
	{
		(*line)++;
		return (ft_print_p(&(*args), flags));
	}
	else
		return (ft_handle_numbers(&(*line), &(*args), flags));
}

int	ft_handle_numbers(char **line, va_list *args, t_flags flags)
{
	if (**line == 'd' || **line == 'i')
	{
		(*line)++;
		return (ft_print_int(&(*args), flags));
	}
	else if (**line == 'u')
	{
		(*line)++;
		return (ft_print_u(&(*args), flags));
	}
	else if (**line == 'x' || **line == 'X')
	{
		(*line)++;
		if (*(*line - 1) == 'x')
			return (ft_print_x(&(*args), flags, 0));
		return (ft_print_x(&(*args), flags, 1));
	}
	else
		return (0);
}

int	ft_inner_printf(char *line, va_list *args)
{
	t_flags	flags;
	int		output;

	output = 0;
	while (*line)
	{
		if (*line == '%' && ft_check_specifier(line))
		{
			flags = ft_init_flags();
			line++;
			output += ft_sort_flags(&(line), &(*args), &flags);
		}
		else
			output += ft_print_chars(&line);
	}
	return (output);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	char	*line;
	int		output;

	line = ft_strdup(input);
	va_start(args, input);
	output = ft_inner_printf(line, &args);
	va_end(args);
	free(line);
	return (output);
}
