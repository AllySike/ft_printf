/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_treatment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 02:17:36 by marvin            #+#    #+#             */
/*   Updated: 2021/01/11 02:17:36 by marvin           ###   ########.fr       */
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
    if (n == 0)
        range++;
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

int    ft_int_flags(t_flags *flags, char **mass, int i)
{
    int len;
    if ((*flags).precision < 0)
        (*flags).precision = 0;
//    else if (i)
//        (*flags).zero = 0;
    *mass = ft_itoa(i);
    len = ft_strlen(*mass);
    return (len);
}

int				ft_print_int(va_list *args, t_flags flags, char **line)
{
	int		counter;
	char	*mass;
	int		len;
	int		i;
	int		minus;

    i = va_arg(*args, int);// ||
    len = ft_int_flags(&flags, &mass, i);
	if (!(counter = 0) && !(minus = 0) && i < 0)
		minus++;
    if (flags.precisionset && !flags.precision && !i)
        counter += ft_print_width(flags.width, 0, 0, *(&line));
	if (!flags.minus && !flags.zero && i)
		counter += ft_print_width(flags.width, ft_max(len + minus,
			flags.precision + minus), 0, *(&line));
	if (i < 0 && ++counter)
		ft_strjoin(&(*line), "-");
	if (!flags.minus && flags.zero)
		counter += ft_print_width(flags.width,
			ft_max(len + counter, flags.precision), 1, *(&line));
	if (flags.precision > len)
		counter += ft_print_width(flags.precision, len, 1, *(&line));
	if (i || ((flags.precisionset && flags.precision) || !flags.precisionset))
	    ft_strjoin(&(*line), mass);
	else
	    len = 0;
	if (flags.minus && counter + len < flags.width)
		counter += ft_print_width(flags.width, len + counter, 0, *(&line));
	free(mass);
	return (counter + len);
}
