/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:18:05 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/05 16:29:45 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*result;

	i = 0;
	result = (char *)b;
	while (i < len)
	{
		result[i] = c;
		i++;
	}
	return (b);
}
