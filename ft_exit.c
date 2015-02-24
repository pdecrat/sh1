/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:48:33 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 13:59:18 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"
#include <stdlib.h>

char	**ft_exit(char **cmd, char **env)
{
	int i;
	int j;

	i = 0;
	j = ft_tablen(cmd);
	if (j > 2)
	{
		ft_putendl_fd("Exit : Too many arguments.", 2);
		return (env);
	}
	i = (j == 2) ? ft_atoi(cmd[1]) : 42;
	ft_tabdel(cmd);
	ft_tabdel(env);
	exit(i);
}
