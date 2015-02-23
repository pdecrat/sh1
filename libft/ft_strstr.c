/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:06:46 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/08 13:56:20 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strstr(char const *s1, char const *s2)
{
	unsigned int	is1;
	unsigned int	is2;

	is1 = 0;
	while (s1[is1] || !*s2)
	{
		is2 = 0;
		while (s1[is1 + is2] == s2[is2] || !s2[is2])
		{
			if (!s2[is2])
				return ((char *)(s1 + is1));
			is2++;
		}
		is1++;
	}
	return (NULL);
}
