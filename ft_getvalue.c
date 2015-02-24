/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getvalue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:48:49 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 13:59:39 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

char	*ft_getvalue(char *var, char **env)
{
	int		i;
	int		j;

	if ((i = ft_find_value(var, env)) == -1)
		return (NULL);
	j = ft_strchri(env[i], '=') + 1;
	return (env[i] + j);
}
