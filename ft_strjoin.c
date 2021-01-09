/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:36:49 by kgale             #+#    #+#             */
/*   Updated: 2021/01/09 19:13:19 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

void	*ft_strjoin(char **s1, char const *s2)
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
	if (*s1 == NULL)
		return (NULL);
	while (index < len1)
	{
		(*s1)[index] = tmp[index];
		index++;
	}
	index = 0;
	while (index < len2)
	{
		(*s1)[index + len1] = s2[index];
		index++;
	}
	(*s1)[len1 + len2] = '\0';
	free(tmp);
}
