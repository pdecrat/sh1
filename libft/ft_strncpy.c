/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:45:23 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/05 23:05:01 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strncpy(char *dst, char const *src, size_t n)
{
	char	*cursor;

	cursor = dst;
	while (n && *src)
	{
		*dst++ = *src++;
		n--;
	}
	while (n--)
		*dst++ = '\0';
	return (cursor);
}
