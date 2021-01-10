/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:19:51 by kgale             #+#    #+#             */
/*   Updated: 2020/11/04 15:33:57 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putchar(char c)
{
	if ((write(1, &c, 1)) < 0)
		return (-1);
	else
		return (1);
}

int 	ft_print_width(int width, int len, int zero, char **line)
{
	int		count;

	count = 0;
	while (count + len < width)
	{
		if (zero)
			ft_strjoin(&(*line), "0");
		else
			ft_strjoin(&(*line), " ");
		count++;
	}
	return (count);
}

