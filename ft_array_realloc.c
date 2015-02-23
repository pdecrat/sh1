/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_realloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 18:23:07 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:32:54 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

char		**ft_array_realloc(char **old, int sign)
{
	int		size;
	char	**new;

	size = 0;
	while (old[size])
		++size;
	if (!(new = (char **)ft_memalloc(sizeof(char *) * (size + sign + 1))))
		return (NULL);
	return (new);
}
