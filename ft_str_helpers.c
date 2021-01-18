/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:36:49 by kgale             #+#    #+#             */
/*   Updated: 2021/01/18 10:00:09 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*output;
	int		len;

	len = ft_strlen(s1);
	output = (char *)malloc(sizeof(char) * (len + 1));
	if (output == NULL)
		return (NULL);
	output[len] = '\0';
	while (len-- > 0)
		output[len] = s1[len];
	return (output);
}

int		ft_strlen(const char *str)
{
	int	count;

	if (!str || !*str)
		return (0);
	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_strjoin_n(char const *s2, t_flags flags)
{
	int		len2;
	int		index;

	len2 = ft_strlen(s2);
	if (flags.precisionset && flags.precision < len2)
		len2 = flags.precision;
	index = 0;
	while (index < len2 && s2[index++])
		ft_putchar(s2[index - 1]);
}
