/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/21 12:38:08 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 17:39:50 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static void	ft_putprompt(void)
{
	ft_putstr("\033[34;1m$\033[0m>");
}

static void	ft_signaler(int sig)
{
	(void)sig;
	ft_putchar('\n');
	ft_putprompt();
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
	ft_putprompt();
	while (get_next_line(0, &line) > 0)
	{
		ft_parse_cmd(line, lst, &e);
		ft_putprompt();
	}
	return (0);
}
