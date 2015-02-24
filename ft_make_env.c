/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:49:04 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 14:11:51 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include <unistd.h>

static void	ft_var_init(char **env)
{
	env[0] = ft_strdup("PATH=/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin:/opt"
			"/X11/bin:/usr/texbin:");
	env[1] = ft_strjoin("PWD=", getcwd(0, 0));
	env[2] = ft_strjoin("OLDPWD=", getcwd(0, 0));
	env[3] = ft_strdup("SHLVL=0");
	env[4] = ft_strdup("_=/usr/bin/env");
	env[5] = NULL;
}

char		**ft_make_env(void)
{
	char	**env;

	if (!(env = (char **)ft_memalloc(sizeof(char *) * (NB_ENVVAR + 1))))
		return (NULL);
	ft_var_init(env);
	return (env);
}
