/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:19:51 by kgale             #+#    #+#             */
/*   Updated: 2021/01/12 18:14:36 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_width(int width, int len, int zero)
{
	int	count;

	count = 0;
	while (count + len < width)
	{
		if (zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		count++;
	}
	return (count);
}
