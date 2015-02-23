/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_and_join.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 14:28:59 by pdecrat           #+#    #+#             */
/*   Updated: 2015/01/30 14:29:00 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdel_and_join(char *s1, char *s2)
{
	char	*tmp;

	tmp = NULL;
	tmp = ft_strjoin((char const *)s1, (char const *)s2);
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (tmp);
}
