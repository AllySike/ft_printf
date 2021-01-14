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

int	ft_print_chars(char **line)
{
	int		percent;
	char	mass[1];

	percent = 0;
	mass[0] = **line;
	ft_putstr(mass);
	(*line)++;
	return (1);
}

int	ft_print_char(va_list *args, t_flags flags)
{
	int		counter;
	char	mass;

	mass = (char)va_arg(*args, int);
	if (flags.minus)
		ft_putchar(mass);
	counter = ft_print_width(flags.width, 1, flags.zero);
	if (!flags.minus)
		ft_putchar(mass);
	return (counter + 1);
}

int	ft_print_defined_char(char c, t_flags flags)
{
	int		counter;

	if (flags.minus)
		ft_putchar(c);
	counter = ft_print_width(flags.width, 1, flags.zero);
	if (!flags.minus)
		ft_putchar(c);
	return (counter + 1);
}
