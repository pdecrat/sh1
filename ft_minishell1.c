/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/21 12:38:08 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 14:04:40 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static void	ft_putprompt(char **e)
{
	if (ft_find_value("PROMPT", e) > -1 && !(ft_strcmp(ft_getvalue
			("PROMPT", e), "on")))
	{
		if (ft_find_value("USER", e) != -1)
		{
			ft_putstr("\033[1;34m");
			ft_putstr(ft_getvalue("USER", e));
			(ft_find_value("PWD", e) != -1) ? ft_putstr("\033[0m : ")
					: ft_putendl("\033[0m : ");
		}
		if (ft_find_value("PWD", e) != -1)
		{
			ft_putstr("\033[1;32m");
			ft_putstr(ft_getvalue("PWD", e));
			ft_putendl("\033[0m : ");
		}
		ft_putstr("  \033[1m$>\033[0m ");
	}
	else
		ft_putstr("  \033[1m$>\033[0m ");
}

static void	ft_signaler(int sig)
{
	(void)sig;
	ft_putchar('\n');
	ft_putstr("  \033[1m$>\033[0m ");
}

int			main(int ac, char **av, char **env)
{
	char	*line;
	t_pcmd	*lst;
	char	**e;

	(void)ac;
	(void)av;
	line = NULL;
	e = (*env) ? ft_getenv(env) : ft_make_env();
	ft_shlvl(e);
	lst = ft_parse_cmd_init();
	signal(SIGINT, ft_signaler);
	signal(SIGQUIT, ft_signaler);
	signal(SIGTSTP, ft_signaler);
	ft_putprompt(e);
	while (get_next_line(0, &line) > 0)
	{
		ft_parse_cmd(line, lst, &e);
		ft_putprompt(e);
	}
	return (0);
}
