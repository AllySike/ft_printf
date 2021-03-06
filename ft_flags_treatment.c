/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_treatment.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 02:18:13 by marvin            #+#    #+#             */
/*   Updated: 2021/01/18 09:59:49 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_add_minus(char **line, t_flags *flags)
{
	(*flags).minus = 1;
	(*flags).zero = 0;
	(*line)++;
}

void	ft_add_width(char **line, t_flags *flags)
{
	(*flags).width = 0;
	if (*line)
	{
		while (ft_isdigit(**line))
		{
			(*flags).width = ((*flags).width * 10) + **line - '0';
			(*line)++;
		}
	}
}

void	ft_add_unspecified_width(va_list *args, char **line, t_flags *flags)
{
	(*flags).width = va_arg(*args, int);
	if ((*flags).width < 0)
	{
		(*flags).width *= -1;
		(*flags).minus = 1;
		(*flags).zero = 0;
	}
	(*line)++;
}

void	ft_add_precision(va_list *args, char **line, t_flags *flags)
{
	(*line)++;
	(*flags).precisionset = 1;
	if (**line == '*')
	{
		(*flags).precision = va_arg(*args, int);
		(*line)++;
	}
	else if (ft_istype(**line))
	{
		(*flags).precision = 0;
		(*flags).precisionset = 1;
	}
	else
	{
		(*flags).precision = 0;
		if (ft_isdigit(**line))
			while (ft_isdigit(**line))
			{
				(*flags).precision = ((*flags).precision * 10) + (**line - '0');
				(*line)++;
			}
	}
}
