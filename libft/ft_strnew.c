/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:07:21 by pdecrat           #+#    #+#             */
/*   Updated: 2015/01/24 17:46:45 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	int		i;
	char	*result;

	i = 0;
	result = (char *)ft_memalloc(size + 1);
	while (result[i])
	{
		result[i] = '\0';
		i++;
	}
	return (result);
}
