/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/21 14:21:34 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:35:01 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

char		**ft_copy_env(char **e)
{
	int		i;
	char	**new;

	i = 0;
	new = ft_array_realloc(e, 1);
	while (e[i])
	{
		new[i] = e[i];
		++i;
	}
	free(e);
	new[i] = NULL;
	return (new);
}

char		**ft_change_env(char **cmd, char **e)
{
	int		i;

	i = ft_find_value(cmd[1], e);
	if (e[i])
		free(e[i]);
	else
		e = ft_copy_env(e);
	e[i] = ft_strjoin(cmd[1], "=");
	if (cmd[2])
		e[i] = ft_strjoin(e[i], cmd[2]);
	return (e);
}

char		**ft_setenv(char **cmd, char **e)
{
	if (!cmd[1])
		ft_env(cmd, e);
	else if (ft_strchr(cmd[1], '='))
		ft_putendl_fd("ft_setenv : Invalid argmuents.", 2);
	else if (cmd[2] && cmd[3])
		ft_putendl_fd("ft_setenv : Too many arguments.", 2);
	else
		return (ft_change_env(cmd, e));
	return (e);
}
