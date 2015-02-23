/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:34:56 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 12:44:40 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		ft_bzero(void *s, size_t n)
{
	unsigned int		i;
	char				*result;

	i = 0;
	result = (char *)s;
	while (i < n)
	{
		result[i] = 0;
		i++;
	}
}
