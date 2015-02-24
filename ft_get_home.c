/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_home.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 15:40:29 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 14:04:32 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

char		**ft_get_home(char **cmd, char **env)
{
	int		i;
	char	*home_value;
	char	*tmp;

	i = 1;
	while (cmd[i])
	{
		if (cmd[i][0] == '~')
		{
			if (!(home_value = ft_getvalue("HOME", env)))
			{
				ft_putendl_fd("HOME not set.", 2);
				return (NULL);
			}
			tmp = ft_strjoin(home_value, &cmd[i][1]);
			cmd[i] = ft_strdup(tmp);
			free(tmp);
		}
		++i;
	}
	return (cmd);
}
