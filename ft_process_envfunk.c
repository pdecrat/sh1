/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_envfunk.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:50:43 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 14:07:58 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

static char **ft_getdefaultpath(void)
{
	char	*path;
	char	**tab;

	path = ft_strdup("/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin:/opt"
			"/X11/bin:/usr/texbin:");
	tab = ft_strsplit(path, ':');
	ft_strdel(&path);
	return (tab);
}

static int	ft_execute(char *bin, char **cmd, char **env)
{
	pid_t	daddy;

	if (cmd[1] && !(cmd = ft_get_home(cmd, env)))
		return (-1);
	daddy = fork();
	if (daddy > 0)
	{
		wait(0);
		return (1);
	}
	if (daddy == 0)
		execve(bin, cmd, env);
	ft_strdel(&bin);
	return (0);
}

static char	*ft_process_directory(char *path, char *cmd)
{
	char	*bin;
	char	*cmd2;
	int		ret;

	cmd2 = ft_strjoin("/", cmd);
	bin = ft_strjoin(path, cmd2);
	ft_strdel(&path);
	ft_strdel(&cmd2);
	if ((ret = open(bin, O_RDONLY)) > 0)
		close(ret);
	return ((ret > 0) ? bin : NULL);
}

int			ft_process_envfunk(char **env, char **cmd)
{
	char		**tabpath;
	char		*bin;
	int			ret;
	char		*path;

	path = ft_getvalue("PATH", env);
	tabpath = (path) ? ft_strsplit(path, ':') : ft_getdefaultpath();
	if ((ret = open(cmd[0], O_RDONLY)) > 0)
	{
		bin = ft_strdup(cmd[0]);
		close(ret);
	}
	else
	{
		while (*tabpath)
		{
			if ((bin = ft_process_directory(*tabpath, cmd[0])))
				break ;
			tabpath++;
		}
	}
	return ((bin) ? ft_execute(bin, cmd, env) : 0);
}
