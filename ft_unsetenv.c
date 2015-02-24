/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/21 17:39:47 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 14:00:56 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static char		**ft_copy_env(char *cmd, char **old)
{
	int		i;
	int		j;
	int		size;
	char	**new;

	i = 0;
	j = 0;
	new = ft_array_realloc(old, -1);
	size = ft_strlen(cmd);
	while (old[i + j])
	{
		if (!(ft_strncmp(cmd, old[i + j], size))
					&& old[i + j][size] == '=')
			free(old[i + j++]);
		if (old[i + j])
		{
			new[i] = ft_strdup(old[i + j]);
			free(old[i++ + j]);
		}
	}
	free(old);
	new[i] = NULL;
	return (new);
}

char			**ft_unsetenv(char **cmd, char **env)
{
	int		i;
	char	**new;

	i = 1;
	if (!cmd[1])
		ft_putendl_fd("ft_unsetenv : Too few arguments.", 2);
	else
	{
		while (cmd[i])
		{
			new = (i == 1) ? ft_copy_env(cmd[i], env)
				: ft_copy_env(cmd[i], new);
			++i;
		}
		return (new);
	}
	return (env);
}
