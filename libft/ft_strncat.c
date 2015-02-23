/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:38:04 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/05 13:44:53 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncat(char *s1, char const *s2, size_t n)
{
	char			*cursor;
	unsigned int	i;

	i = 0;
	cursor = s1;
	while (*s1)
		s1++;
	while (i < n)
	{
		*s1++ = s2[i];
		i++;
	}
	*s1 = '\0';
	return (cursor);
}
