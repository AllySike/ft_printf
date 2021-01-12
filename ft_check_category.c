/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_category.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:15:49 by kgale             #+#    #+#             */
/*   Updated: 2021/01/12 18:16:25 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	return (0);
}

int		ft_istype(int c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u' ||
		c == 'x' || c == 'X' || c == '%' || c == 'p')
		return (1);
	return (0);
}

int		ft_isflag(int c)
{
	if (c == '-' || c == '0' || c == '.' || c == '*')
		return (1);
	return (0);
}

t_flags	ft_init_flags(void)
{
	t_flags	flags;

	flags.precision = 0;
	flags.precisionset = 0;
	flags.minus = 0;
	flags.width = 0;
	flags.zero = 0;
	return (flags);
}

int		ft_check_specifier(char *line)
{
	*line++;
	while (*line)
	{
		if (!ft_istype(*line) && !ft_isdigit(*line) && !ft_isflag(*line))
			return (0);
		if (*line == '-' || *line == '0' || *line == '*' || ft_isdigit(*line))
			*line++;
		if (*line == '.' && line[1] && (ft_isdigit(line[1])
		|| line[1] == '*' || ft_istype(line[1])))
			*line++;
		else if (*line == '.')
			return (0);
		if (ft_istype(*line))
			return (1);
	}
}
