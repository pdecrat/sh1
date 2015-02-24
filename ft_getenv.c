/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/21 12:39:08 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 13:59:34 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

char	**ft_getenv(char **env)
{
	int		i;
	int		size;
	char	**result;

	i = 0;
	size = 0;
	while (env[size])
		++size;
	if (!(result = (char **)ft_memalloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (env[i])
	{
		result[i] = ft_strdup(env[i]);
		++i;
	}
	result[i] = NULL;
	return (result);
}
