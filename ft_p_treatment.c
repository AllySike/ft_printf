/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_treatment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 16:11:01 by kgale             #+#    #+#             */
/*   Updated: 2021/01/13 17:25:56 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void				ft_p_lengths(unsigned long long int n,
size_t *len, unsigned long long int *width)
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

char					*ft_ptoa(unsigned long long int n)
{
	size_t					len;
	unsigned long long int	width;
	size_t					cur;
	char					*str;
	char					*hex;

	hex = "0123456789abcdef";
	ft_p_lengths(n, &len, &width);
	str = (char *)malloc(sizeof(*str) * (len + 3));
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = 'x';
	cur = 2;
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

int						ft_p_flags(t_flags *flags,
char **mass, unsigned long long int i)
{
	int	len;

	if ((*flags).precision < 0)
	{
		(*flags).precision = 0;
		(*flags).precisionset = 0;
	}
	*mass = ft_ptoa(i);
	len = ft_strlen(*mass);
	return (len);
}

unsigned long long int	ft_print_p(va_list *args, t_flags flags, char **line)
{
	unsigned long long int	counter;
	char					*mass;
	unsigned long long int	i;

	i = va_arg(*args, unsigned long long int);
	counter = ft_handle_p_flags(flags, &(*line), &mass, i);
	free(mass);
	return (counter);
}
