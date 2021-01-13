/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 05:42:31 by kgale             #+#    #+#             */
/*   Updated: 2021/01/12 18:03:06 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_flags(char **line, va_list *args, t_flags *flags, char **out)
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
			return (ft_handle_text(&(*line), &(*args), *flags, &(*out)));
	}
	return (counter);
}

int	ft_handle_text(char **line, va_list *args, t_flags flags, char **out)
{
	if (**line == 'c')
	{
		(*line)++;
		return (ft_print_char(&(*args), flags, &(*out)));
	}
	else if (**line == 's')
	{
		(*line)++;
		return (ft_print_string(&(*args), flags, &(*out)));
	}
	else if (**line == '%')
		return (ft_put_percent(&(*line), flags, &(*out)));
	else if (**line == 'p')
		return (3);
	else
		return (ft_handle_numbers(&(*line), &(*args), flags, &(*out)));
}

int	ft_handle_numbers(char **line, va_list *args, t_flags flags, char **out)
{
	if (**line == 'd' || **line == 'i')
	{
		(*line)++;
		return (ft_print_int(&(*args), flags, &(*out)));
	}
	else if (**line == 'u')
		return (2);
	else if (**line == 'x')
		return (3);
	else if (**line == 'X')
		return (4);
	else
		return (0);
}

int	ft_inner_printf(char *line, va_list *args, char **out)
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
			output += ft_sort_flags(&(line), &(*args), &flags, &(*out));
			if (!output)
				return (0);
		}
		else
			output += ft_print_chars(&line, &(*out));
	}
	return (output);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	char	*line;
	int		output;
	char	*out;

	line = ft_strdup(input);
	if (!(out = (char *)malloc(sizeof(char) * 1)))
		return (0);
	out[0] = '\0';
	va_start(args, input);
	output = ft_inner_printf(line, &args, &out);
	va_end(args);
	ft_putstr(out);
	free(out);
	free(line);
	return (output);
}
