/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:53:37 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/05 16:18:14 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	unsigned int	is1;
	unsigned int	is2;
	unsigned int	tmp;

	is1 = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[is1] && n)
	{
		is2 = 0;
		tmp = n;
		while (s1[is1 + is2] == s2[is2])
		{
			is2++;
			if (!s2[is2] && is2 <= n)
				return ((char *)(s1 + is1));
			tmp--;
		}
		is1++;
		n--;
	}
	return (NULL);
}
