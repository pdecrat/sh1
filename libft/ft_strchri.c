/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:20:15 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:25:13 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strchri(const char *s, int c)
{
	char	ch;
	int		i;

	ch = c;
	i = 0;
	if (s == NULL)
		return (-1);
	while (s[i] != ch)
	{
		if (s[i] == '\0')
			return (-1);
		i++;
	}
	return (i);
}
