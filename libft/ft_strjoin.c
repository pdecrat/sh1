/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:21:17 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/10 19:22:07 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	unsigned int	length;
	unsigned int	i;

	i = 0;
	if (s1 && s2)
	{
		length = ft_strlen(s1) + ft_strlen(s2) + 1;
		if (!(result = (char *)malloc(sizeof(*result) * length)))
			return (NULL);
		while (*s1)
		{
			result[i] = *s1;
			i++;
			s1++;
		}
		while (*s2)
		{
			result[i] = *s2;
			i++;
			s2++;
		}
		result[i] = '\0';
	}
	return ((s1 && s2) ? result : NULL);
}
