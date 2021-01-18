/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:03:37 by kgale             #+#    #+#             */
/*   Updated: 2021/01/18 13:05:38 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_handle_int_flags(t_flags flags, int i, char **mass)
{
	int	counter;
	int	minus;
	int	len;

	len = ft_int_flags(&flags, &(*mass), i);
	if (!(minus = 0) && i < 0)
		minus++;
	if ((!(counter = 0) && (!flags.minus && !flags.zero)) || (flags.zero
		&& flags.precisionset && flags.precision < flags.width) || (!flags.minus
		&& !flags.precision && flags.precisionset && flags.width > len))
		counter += ft_print_width(flags.width, ft_max(len + minus,
			flags.precision + minus), 0);
	if (i < 0 && ++counter)
		ft_putchar('-');
	if (flags.zero && flags.precision < len)
		counter += ft_print_width(flags.width,
			ft_max(len + counter, flags.precision), 1);
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1);
	if ((((flags.precisionset && flags.precision)
	|| !flags.precisionset) && !i) || i)
		ft_putstr(*mass);
	if ((flags.minus && counter + len < flags.width) || !i)
		counter += ft_print_width(flags.width, len + counter, 0);
	return (counter + len);
}

int	ft_handle_u_flags(t_flags flags, char **mass, unsigned int i)
{
	int	counter;
	int	len;

	len = ft_u_flags(&flags, &(*mass), i);
	if ((!(counter = 0) && (!flags.minus && !flags.zero)) || (flags.zero
			&& flags.precisionset && flags.precision < flags.width))
		counter += ft_print_width(flags.width, ft_max(len,
			flags.precision), 0);
	if (flags.zero && flags.precision < len)
		counter += ft_print_width(flags.width,
			ft_max(len + counter, flags.precision), 1);
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1);
	if ((((flags.precisionset && flags.precision)
	|| !flags.precisionset) && !i) || i)
		ft_putstr(*mass);
	else
		len = 0;
	if ((flags.minus && counter + len < flags.width) || !i)
		counter += ft_print_width(flags.width, len + counter, 0);
	return (counter + len);
}

int	ft_handle_x_flags(t_flags flags, unsigned int i, int x)
{
	int		counter;
	int		len;
	char	*mass;

	len = ft_x_flags(&flags, &(mass), i, x);
	if ((!(counter = 0) && (!flags.minus && !flags.zero)) || (flags.zero
			&& flags.precisionset && flags.precision < flags.width))
		counter += ft_print_width(flags.width, ft_max(len,
			flags.precision), 0);
	if (flags.zero && flags.precision < len)
		counter += ft_print_width(flags.width,
			ft_max(len + counter, flags.precision), 1);
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1);
	if ((((flags.precisionset && flags.precision)
	|| !flags.precisionset) && !i) || i)
		ft_putstr(mass);
	else
		len = 0;
	if ((flags.minus && counter + len < flags.width) || !i)
		counter += ft_print_width(flags.width, len + counter, 0);
	free(mass);
	return (counter + len);
}

int	ft_handle_p_flags(t_flags flags,
	char **mass, unsigned long long int i)
{
	int	counter;
	int	len;

	len = ft_p_flags(&flags, &(*mass), i) + 2;
	if ((!(counter = 0) && (!flags.minus && !flags.zero)) || (flags.zero
	&& flags.precisionset && flags.precision < flags.width) || (!flags.minus
	&& !flags.precision && flags.precisionset && flags.width > len))
		counter += ft_print_width(flags.width, ft_max(len,
		flags.precision + 2), 0);
	ft_putstr("0x");
	len -= 2;
	if (flags.zero && flags.precision < len)
		counter += ft_print_width(flags.width,
		ft_max(len + counter + 2, flags.precision), 1);
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1);
	if (((flags.precisionset && flags.precision) || !i) || !flags.precisionset)
		ft_putstr(*mass);
	if ((flags.minus && counter + len < flags.width) || !i)
		counter += ft_print_width(flags.width, len + counter + 2, 0);
	len += 2;
	return (counter + len);
}
