/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/21 15:43:17 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:33:28 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

int		ft_find_value(char *to_find, char **e)
{
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(to_find);
	while (e[i])
	{
		if (!(ft_strncmp(to_find, e[i], size)) && e[i][size] == '=')
			break ;
		++i;
	}
	return (i);
}
