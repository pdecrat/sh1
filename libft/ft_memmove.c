/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:08:31 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/08 15:39:48 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void		*ft_memmove(void *dst, void const *src, size_t len)
{
	char			*ptrdst;
	char const		*ptrsrc;

	ptrdst = (char *)dst;
	ptrsrc = ft_strdup((char *)src);
	while (len--)
		*ptrdst++ = *ptrsrc++;
	return (dst);
}
