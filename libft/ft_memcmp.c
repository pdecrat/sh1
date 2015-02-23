/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:06:52 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/06 13:53:53 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned int		i;
	char				*ptrs1;
	char				*ptrs2;

	i = 0;
	ptrs1 = (char *)s1;
	ptrs2 = (char *)s2;
	while (i < n && ptrs1[i] == ptrs2[i])
		i++;
	return ((i == n) ? 0 : ((unsigned char)ptrs1[i] - (unsigned char)ptrs2[i]));
}
