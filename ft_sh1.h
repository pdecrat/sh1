/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:35:42 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:35:43 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH1_H
# define FT_SH1_H

# include "libft.h"
# define NB_FUNK 5
# define NB_ENVVAR 5
# define NAME "Sh1"

typedef	struct	s_pcmd
{
	char		*name;
	char		**(*f)(char **, char **);
}				t_pcmd;

/*
**	Built in Funks
*/

int				ft_parse_cmd(char *cmd, t_pcmd *lst, char ***env);
t_pcmd			*ft_parse_cmd_init(void);
char			**ft_env(char **cmd, char **env);
void			ft_errorinette(const char *cmd, const char *error);
int				ft_process_envfunk(char **env, char **cmd);
char			**ft_getenv(char **env);
void			ft_shlvl(char **e);
char			**ft_array_realloc(char **old, int sign);
char			**ft_setenv(char **cmd, char **e);
int				ft_find_value(char *to_find, char **e);
char			*ft_getvalue(char *var, char **env);
void			ft_errorinator(const char *cmd, const char *error);
char			**ft_exit(char **cmd, char **env);
char			**ft_unsetenv(char **cmd, char **env);
char			**ft_make_env(void);
void			ft_tabdel(char **tab);
char			**ft_get_home(char **cmd, char **env);

#endif
