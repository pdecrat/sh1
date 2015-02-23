/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:20:37 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 15:50:53 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (f && s)
	{
		if ((str = (char *)ft_memalloc(sizeof(*str) * (ft_strlen(s) + 1))))
		{
			while (s[i])
			{
				str[i] = f(i, s[i]);
				i++;
			}
			return (str);
		}
	}
	return (NULL);
}
