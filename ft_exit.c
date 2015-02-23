/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:33:19 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:33:22 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"
#include <stdlib.h>

char	**ft_exit(char **cmd, char **env)
{
	ft_tabdel(cmd);
	ft_tabdel(env);
	exit(42);
}
