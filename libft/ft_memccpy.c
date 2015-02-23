/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:58:28 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/05 22:37:27 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	unsigned int		i;
	char				*ptrdst;
	char const			*ptrsrc;

	ptrdst = dst;
	ptrsrc = src;
	i = 0;
	while (i < n && ptrsrc[i] != c)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		ptrdst[i] = ptrsrc[i];
		return (&ptrdst[i + 1]);
	}
}
