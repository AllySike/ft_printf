/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_treatment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 02:17:36 by marvin            #+#    #+#             */
/*   Updated: 2021/01/12 18:07:40 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_lengths(int n, size_t *len, int *width)
{
	if (n == -2147483648)
	{
		*len = 10;
		*width = 100000000;
		return ;
	}
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

char			*ft_itoa(int n)
{
	size_t		len;
	int			width;
	size_t		cur;
	char		*str;

	ft_lengths(n, &len, &width);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	cur = 0;
	if (n == -2147483648)
	{
		str[cur++] = '2';
		n = 147483648;
	}
	else if (n < 0)
		n *= -1;
	while (width >= 1)
	{
		str[cur++] = (n / width % 10) + 48;
		width /= 10;
	}
	str[cur] = '\0';
	return (str);
}

int				ft_int_flags(t_flags *flags, char **mass, int i)
{
	int	len;

	if ((*flags).precision < 0)
	{
		(*flags).precision = 0;
		(*flags).precisionset = 0;
	}
	if (i && !(*flags).precision && (*flags).precisionset)
	{
		(*flags).precision = 0;
		(*flags).precisionset = 0;
	}
	*mass = ft_itoa(i);
	len = ft_strlen(*mass);
	return (len);
}

int				ft_print_int(va_list *args, t_flags flags)
{
	int		counter;
	char	*mass;
	int		i;

	i = va_arg(*args, int);
	counter = ft_handle_int_flags(flags, i, &mass);
	free(mass);
	return (counter);
}
