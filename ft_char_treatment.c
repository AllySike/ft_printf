/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_treatment.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:12:19 by kgale             #+#    #+#             */
/*   Updated: 2021/01/12 18:14:04 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_chars(char **line, char **out)
{
	int		percent;
	char	mass[1];
	int		output;

	percent = 0;
	output = 0;
	mass[0] = **line;
	ft_strjoin(&(*out), mass);
	*(*line)++;
	return (output);
}

int	ft_print_char(va_list *args, t_flags flags, char **line)
{
	int		counter;
	char	mass[2];

	mass[0] = (char)va_arg(*args, int);
	mass[1] = '\0';
	if (flags.minus)
		ft_strjoin(&(*line), mass);
	counter = ft_print_width(flags.width, 1, flags.zero, &(*line));
	if (!flags.minus)
		ft_strjoin(&(*line), mass);
	return (counter + 1);
}

int	ft_print_defined_char(char c, t_flags flags, char **line)
{
	int		counter;
	char	mass[2];

	mass[0] = c;
	mass[1] = '\0';
	if (flags.minus)
		ft_strjoin(&(*line), mass);
	counter = ft_print_width(flags.width, 1, flags.zero, &(*line));
	if (!flags.minus)
		ft_strjoin(&(*line), mass);
	return (counter + 1);
}
