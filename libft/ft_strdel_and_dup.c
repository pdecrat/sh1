/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_and_dup.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 14:28:50 by pdecrat           #+#    #+#             */
/*   Updated: 2015/01/30 14:28:51 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdel_and_dup(char *s1)
{
	char	*tmp;

	tmp = NULL;
	tmp = ft_strdup((char const *)s1);
	ft_strdel(&s1);
	return (tmp);
}
