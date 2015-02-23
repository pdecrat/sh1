/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:27:26 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 15:54:17 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strtrim(char const *s)
{
	unsigned int	isrc;
	unsigned int	len;
	char			*res;

	isrc = 0;
	res = ft_strnew(0);
	if (s)
	{
		len = ft_strlen(s) - 1;
		while (s[isrc] == ' ' || s[isrc] == '\n' || s[isrc] == '\t')
			isrc++;
		if (isrc != len + 1)
			while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
					&& len > 0)
				len--;
		res = ft_strsub(s, isrc, (len - isrc + 1));
	}
	return (res);
}
