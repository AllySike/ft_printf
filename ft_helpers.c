/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:03:37 by kgale             #+#    #+#             */
/*   Updated: 2021/01/13 17:21:27 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_handle_int_flags(t_flags flags, char **line, int i, char **mass)
{
	int	counter;
	int	minus;
	int	len;

	len = ft_int_flags(&flags, &(*mass), i);
	if (!(minus = 0) && i < 0)
		minus++;
	if ((!(counter = 0) && (!flags.minus && !flags.zero)) || (flags.zero
			&& flags.precisionset && flags.precision < flags.width))
		counter += ft_print_width(flags.width, ft_max(len + minus,
			flags.precision + minus), 0, *(&line));
	if (i < 0 && ++counter)
		ft_strjoin(&(*line), "-");
	if (flags.zero && flags.precision < len)
		counter += ft_print_width(flags.width,
		ft_max(len + counter, flags.precision), 1, *(&line));
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1, *(&line));
	if ((flags.precisionset && flags.precision) || !flags.precisionset)
		ft_strjoin(&(*line), *mass);
	else
		len = 0;
	if ((flags.minus && counter + len < flags.width) || !i)
		counter += ft_print_width(flags.width, len + counter, 0, *(&line));
	return (counter + len);
}

int	ft_handle_u_flags(t_flags flags, char **line, char **mass, unsigned int i)
{
	int	counter;
	int	len;

	len = ft_u_flags(&flags, &(*mass), i);
	if ((!(counter = 0) && (!flags.minus && !flags.zero)) || (flags.zero
			&& flags.precisionset && flags.precision < flags.width))
		counter += ft_print_width(flags.width, ft_max(len,
			flags.precision), 0, *(&line));
	if (flags.zero && flags.precision < len)
		counter += ft_print_width(flags.width,
			ft_max(len + counter, flags.precision), 1, *(&line));
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1, *(&line));
	if ((flags.precisionset && flags.precision) || !flags.precisionset)
		ft_strjoin(&(*line), *mass);
	else
		len = 0;
	if ((flags.minus && counter + len < flags.width) || !i)
		counter += ft_print_width(flags.width, len + counter, 0, *(&line));
	return (counter + len);
}

int	ft_handle_x_flags(t_flags flags, char **line, unsigned int i, int x)
{
	int		counter;
	int		len;
	char	*mass;

	len = ft_x_flags(&flags, &(mass), i, x);
	if ((!(counter = 0) && (!flags.minus && !flags.zero)) || (flags.zero
			&& flags.precisionset && flags.precision < flags.width))
		counter += ft_print_width(flags.width, ft_max(len,
			flags.precision), 0, *(&line));
	if (flags.zero && flags.precision < len)
		counter += ft_print_width(flags.width,
			ft_max(len + counter, flags.precision), 1, *(&line));
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1, *(&line));
	if ((flags.precisionset && flags.precision) || !flags.precisionset)
		ft_strjoin(&(*line), mass);
	else
		len = 0;
	if ((flags.minus && counter + len < flags.width) || !i)
		counter += ft_print_width(flags.width, len + counter, 0, *(&line));
	free(mass);
	return (counter + len);
}

int	ft_handle_p_flags(t_flags flags, char **line,
char **mass, unsigned long long int i)
{
	int	counter;
	int	len;

	len = ft_p_flags(&flags, &(*mass), i);
	if ((!(counter = 0) && (!flags.minus && !flags.zero)) || (flags.zero
			&& flags.precisionset && flags.precision < flags.width))
		counter += ft_print_width(flags.width, ft_max(len,
			flags.precision), 0, *(&line));
	if (flags.zero && flags.precision < len)
		counter += ft_print_width(flags.width,
			ft_max(len + counter, flags.precision), 1, *(&line));
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1, *(&line));
	if ((flags.precisionset && flags.precision) || !flags.precisionset)
		ft_strjoin(&(*line), *mass);
	else
		len = 0;
	if ((flags.minus && counter + len < flags.width) || !i)
		counter += ft_print_width(flags.width, len + counter, 0, *(&line));
	return (counter + len);
}
