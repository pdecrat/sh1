/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:07:03 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/04 15:46:02 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = NULL;
	if (!(tmp = (char *)malloc(size)))
		return (NULL);
	while (tmp && i < size)
	{
		*(tmp + i) = 0;
		i++;
	}
	return ((void *)tmp);
}
