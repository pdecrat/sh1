/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:00:32 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/06 17:35:23 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memchr(void const *s, int c, size_t n)
{
	if (!n)
		return (NULL);
	if (*(unsigned char *)s == (unsigned char)c)
		return ((void *)s);
	else
		return (ft_memchr(s + 1, c, n - 1));
}
