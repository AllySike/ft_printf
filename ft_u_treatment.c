/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_treatment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 16:11:01 by kgale             #+#    #+#             */
/*   Updated: 2021/01/13 16:11:58 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_u_lengths(unsigned int n, size_t *len, unsigned int *width)
{
	if (n < 0)
		n *= -1;
	*len = 0;
	*width = 1;
	while (n / *width > 9)
	{
		*width *= 10;
		*len += 1;
	}
}

char			*ft_utoa(unsigned int n)
{
	size_t			len;
	unsigned int	width;
	size_t			cur;
	char			*str;

	ft_u_lengths(n, &len, &width);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	cur = 0;
	if (n < 0)
		n *= -1;
	while (width >= 1)
	{
		str[cur++] = (n / width % 10) + 48;
		width /= 10;
	}
	str[cur] = '\0';
	return (str);
}

int				ft_u_flags(t_flags *flags, char **mass, unsigned int i)
{
	int	len;

	if ((*flags).precision < 0)
	{
		(*flags).precision = 0;
		(*flags).precisionset = 0;
	}
	*mass = ft_utoa(i);
	len = ft_strlen(*mass);
	return (len);
}

unsigned int	ft_print_u(va_list *args, t_flags flags, char **line)
{
	unsigned int	counter;
	char			*mass;
	unsigned int	i;

	i = va_arg(*args, unsigned int);
	counter = ft_handle_u_flags(flags, &(*line), &mass, i);
	free(mass);
	return (counter);
}
