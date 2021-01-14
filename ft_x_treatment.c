/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_treatment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 16:13:46 by kgale             #+#    #+#             */
/*   Updated: 2021/01/13 16:14:21 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_hex_lengths(unsigned int n, size_t *len, unsigned int *width)
{
	if (n < 0)
		n *= -1;
	*len = 0;
	*width = 1;
	while (n / *width >= 16)
	{
		*width *= 16;
		*len += 1;
	}
}

char			*ft_xtoa(unsigned int n, int x)
{
	size_t			len;
	unsigned int	width;
	size_t			cur;
	char			*str;
	char			*hex;

	if (x == 0)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	ft_hex_lengths(n, &len, &width);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	cur = 0;
	if (n < 0)
		n *= -1;
	while (width >= 1)
	{
		str[cur++] = hex[(n / width % 16)];
		width /= 16;
	}
	str[cur] = '\0';
	return (str);
}

int				ft_x_flags(t_flags *flags, char **mass, unsigned int i, int x)
{
	int		len;

	if ((*flags).precision < 0)
	{
		(*flags).precision = 0;
		(*flags).precisionset = 0;
	}
	*mass = ft_xtoa(i, x);
	len = ft_strlen(*mass);
	return (len);
}

int				ft_print_x(va_list *args, t_flags flags, int x)
{
	unsigned int	counter;
	unsigned int	i;

	i = va_arg(*args, unsigned int);
	counter = ft_handle_x_flags(flags, i, x);
	return (counter);
}
