/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_treatment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:13:38 by kgale             #+#    #+#             */
/*   Updated: 2021/01/13 16:13:33 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s != NULL)
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
}

int		ft_put_percent(char **line, t_flags flags)
{
	(*line)++;
	if (flags.width > 1 && !flags.minus)
		ft_print_width(flags.width, 1, flags.zero);
	ft_putchar('%');
	if (flags.width > 1 && flags.minus)
		ft_print_width(flags.width, 1, flags.zero);
	if (!flags.width)
		flags.width = 1;
	return (flags.width);
}

int		ft_str_flags(t_flags *flags, char **mass)
{
	int len;

	if (*mass && **mass)
		len = ft_strlen(*mass);
	else if (*mass && !(len = 0))
		(*flags).precision = (*flags).width;
	else
	{
		*mass = "(null)\0";
		len = 6;
	}
	if ((*flags).precision < 0)
	{
		(*flags).precision = 0;
		(*flags).precisionset = 0;
	}
	if ((*flags).width < (*flags).precision && (*flags).precisionset
	&& (*flags).width && len > (*flags).precision)
		len = (*flags).width;
	if ((*flags).precisionset && len > (*flags).precision)
		return ((*flags).precision);
	return (len);
}

int		ft_print_string(va_list *args, t_flags flags)
{
	int		counter;
	char	*mass;
	int		len;
	int		width;

	mass = va_arg(*args, char *);
	len = ft_str_flags(&flags, &mass);
	width = 0;
	counter = 0;
	if (flags.minus)
		ft_strjoin_n(mass, flags);
	counter += ft_print_width(flags.width, len, flags.zero);
	if (!flags.minus)
		ft_strjoin_n(mass, flags);
	return (counter + len);
}
