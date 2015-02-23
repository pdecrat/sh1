/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getvalue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:33:54 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:33:55 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"

char	*ft_getvalue(char *var, char **env)
{
	int		i;
	int		j;

	i = ft_find_value(var, env);
	j = ft_strchri(env[i], '=') + 1;
	return (env[i] + j);
}
