/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:36:49 by kgale             #+#    #+#             */
/*   Updated: 2021/01/12 18:05:45 by kgale            ###   ########.fr       */
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

	if (!str && !*str)
		return (0);
	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_strjoin(char **s1, char const *s2)
{
	int		len1;
	int		len2;
	int		index;
	char	*tmp;

	len1 = ft_strlen(*s1);
	len2 = ft_strlen(s2);
	index = 0;
	tmp = *s1;
	*s1 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (*s1)
	{
		while (index++ < len1)
			(*s1)[index - 1] = tmp[index - 1];
		index = 0;
		while (index++ < len2)
			(*s1)[index + len1 - 1] = s2[index - 1];
		(*s1)[len1 + len2] = '\0';
		free(tmp);
	}
}
