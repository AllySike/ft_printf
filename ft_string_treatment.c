/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_treatment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 19:13:38 by kgale             #+#    #+#             */
/*   Updated: 2021/01/09 19:13:39 by kgale            ###   ########.fr       */
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

int		ft_print_string(va_list args, t_flags flags, char **line)
{
	int		counter;
	char	*mass;

	mass = va_arg(args, char *);
	if (flags.minus)
		ft_strjoin(&(*line), mass);
	counter = ft_print_width(flags.width,
		ft_strlen(mass), flags.zero, &(*line));
	if (!flags.minus)
		ft_strjoin(&(*line), mass);
	return (counter + ft_strlen(mass));
}
