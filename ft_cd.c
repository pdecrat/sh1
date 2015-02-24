/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajodin <ajodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 08:42:00 by ajodin            #+#    #+#             */
/*   Updated: 2015/02/23 23:42:00 by ajodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include <unistd.h>
#include <dirent.h>

char 			**ft_change_working_directory(char **env, char *cmd)
{
	char *tmp;
	int		i;

	if ((i = ft_find_value("OLDPWD", env) != -1)
			&& (ft_find_value("PWD", env) != -1))
	{
		tmp = ft_strjoin("OLDPWD=", ft_getvalue("PWD", env));
		ft_strdel(&env[i]);
		env[i] = tmp;
	}
	if ((i = ft_find_value("PWD", env)) != -1)
	{
		ft_strdel(&env[i]);
		env[i] = ft_strjoin("PWD=", getcwd(0, 0));
	}
	return (env);
}

char			**ft_check_home(char **cmd, char **env, int len)
{
	if (len == 1)
	{
		cmd = ft_array_realloc(cmd, 1);
		cmd[1] = ft_strdup("~");
	}
	return ((cmd = ft_get_home(cmd, env)) ? cmd : NULL);
}

char 			**ft_process_cd(char **cmd, char **env)
{
	DIR		*dip;
	char 	*tmp;

	tmp = NULL;
	if (cmd[1] && cmd[1][0] != '/')
		tmp = ft_strjoin("./", cmd[1]);
	if (tmp)
	{
		ft_strdel(&cmd[1]);
		cmd[1] = ft_strdup(tmp);
	}
	if ((dip = opendir(cmd[1])))
	{
		closedir(dip);
		chdir(cmd[1]);
		env = ft_change_working_directory(env, cmd[1]);
	}
	else
		ft_putendl_fd("cd : Could not open this directory", 2);
	return (env);
}

char 			**ft_cd(char **cmd, char **env)
{

	int		len;

	if ((len = ft_tablen(cmd)) > 2)
	{
		ft_putendl_fd("cd : too many argument", 2);
		return (env);
	}
	if (cmd[1] && !(ft_strcmp(cmd[1], "-")) &&
			(ft_find_value("OLDPWD", env)) != -1)
		cmd[1] = ft_strdup(ft_getvalue("OLDPWD", env));
	if (!(cmd = ft_check_home(cmd, env, len)))
		return (env);
	return (ft_process_cd(cmd, env));
}
