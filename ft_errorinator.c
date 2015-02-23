/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorinator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:33:06 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:33:09 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"
#include "libft.h"

void	ft_errorinette(const char *cmd, const char *error)
{
	ft_putstr_fd("\033[31;1m", 2);
	ft_putstr_fd(NAME, 2);
	ft_putstr_fd("\033[0m : ", 2);
	ft_putstr_fd(error, 2);
	if (cmd != NULL)
	{
		ft_putstr_fd(": ", 2);
		ft_putstr_fd(cmd, 2);
	}
	ft_putchar_fd('\n', 2);
}

void	ft_errorinator(const char *cmd, const char *error)
{
	ft_putstr_fd("\033[31;1m", 2);
	ft_putstr_fd(cmd, 2);
	ft_putstr_fd("\033[0m : ", 2);
	ft_putendl_fd(error, 2);
}
