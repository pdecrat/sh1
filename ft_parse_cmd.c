/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_cmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:34:26 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:59:07 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static t_pcmd	*ft_name_init(t_pcmd *lst)
{
	lst[0].name = "exit";
	lst[1].name = "cd";
	lst[2].name = "setenv";
	lst[3].name = "unsetenv";
	lst[4].name = "env";
	lst[5].name = NULL;
	return (lst);
}

static t_pcmd	*ft_funk_init(t_pcmd *lst)
{
	lst[0].f = ft_exit;
//	lst[1].f = ft_cd;
	lst[2].f = ft_setenv;
	lst[3].f = ft_unsetenv;
	lst[4].f = ft_env;
	lst[5].f = NULL;
	return (lst);
}

t_pcmd			*ft_parse_cmd_init(void)
{
	t_pcmd *lst;

	lst = (t_pcmd *)ft_memalloc(sizeof(t_pcmd) * (NB_FUNK + 1));
	lst = ft_name_init(lst);
	lst = ft_funk_init(lst);
	return (lst);
}

int				ft_parse_cmd(char *line, t_pcmd *lst, char ***env)
{
	int		i;
	char	**cmd;

	i = 0;
	while (*line && (ft_isspace(*line)))
		line++;
	if (!*line)
		return (0);
	cmd = ft_strsplit(line, ' ');
	while (lst[i].name && ft_strcmp(cmd[0], lst[i].name) != 0)
		i++;
	if (lst[i].name)
		*env = lst[i].f(cmd, *env);
	else if ((ft_process_envfunk(*env, cmd)) == 0)
		ft_errorinette(cmd[0], "Command not found");
	ft_tabdel(cmd);
	return (0);
}
