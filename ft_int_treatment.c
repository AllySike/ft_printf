/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_treatment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:51:56 by kgale             #+#    #+#             */
/*   Updated: 2021/01/09 19:10:10 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_count_range(int n)
{
	int	range;
	int	nbr;

	range = 0;
	nbr = 1000000000;
	while (n != 0 && n / nbr == 0 && range++ < 10)
		nbr /= 10;
	if (n == 0)
		range = 10;
	range = 10 - range;
	return (range);
}

static long int	ft_count_nbr(int n)
{
	int			range;
	long int	nbr;

	range = 0;
	nbr = 1000000000;
	while (n != 0 && n / nbr == 0 && range++ < 10)
		nbr /= 10;
	return (nbr);
}

char			*ft_itoa(int n)
{
	char		*output;
	long int	nmbr;
	int			i;
	int			range;
	long int	nbr;

	i = 0;
	nbr = ft_count_nbr(n);
	range = ft_count_range(n);
	output = (char *)malloc(sizeof(char) * (range + 1));
	nmbr = (long)n;
	if (n < 0)
		nmbr *= -1;
	while (i < range && output != NULL)
	{
		output[i++] = (nmbr / nbr + '0');
		nmbr %= nbr;
		nbr /= 10;
	}
	if (output != NULL)
		output[i] = '\0';
	return (output);
}

int				ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int				ft_print_int(va_list *args, t_flags flags, char **line)
{
	int		counter;
	char	*mass;
	int		len;
	int		i;

	i = va_arg(*args, int);
	mass = ft_itoa(i);
	counter = 0;
    //////////////////
    len = ft_strlen(mass);
//    if (flags.precision != 0)
//        flags.zero = 0;
    if (flags.precision < 0)
    {
        flags.precision = 0;
        /*
        if (i < 0)// && !flags.minus)
            len++;*/
//            flags.width++;
    }
	//////////////////
	if (!flags.minus && !flags.zero && flags.width > ft_max(len, flags.precision))
		counter += ft_print_width(flags.width,
							ft_max(len, flags.precision), 0, *(&line));
	if (i < 0 && ++counter)
        ft_strjoin(&(*line), "-");
    if (!flags.minus && flags.zero && flags.width > ft_max(len, flags.precision))
        counter += ft_print_width(flags.width,
                                  ft_max(len, flags.precision), 1, *(&line));
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1, *(&line));
	ft_strjoin(&(*line), mass);
	if (flags.minus && counter + len < flags.width)
		counter += ft_print_width(flags.width, len + counter, 0, *(&line));
	free(mass);
	return (counter + len);//ft_max(len, ft_max(flags.precision, flags.width)));
}
