/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_treatment.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:12:19 by kgale             #+#    #+#             */
/*   Updated: 2021/01/09 19:12:57 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
