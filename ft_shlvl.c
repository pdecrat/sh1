/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shlvl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 17:18:46 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:59:19 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void		ft_shlvl(char **e)
{
	char		*tmp;
	int			index;
	int			value;

	index = ft_find_value("SHLVL", e);
	value = ft_atoi(ft_getvalue("SHLVL", e));
	free(e[index]);
	tmp = ft_itoa(++value);
	e[index] = ft_strjoin("SHLVL=", tmp);
	free(tmp);
}
