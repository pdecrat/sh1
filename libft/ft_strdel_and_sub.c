/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_and_sub.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 14:18:04 by pdecrat           #+#    #+#             */
/*   Updated: 2015/01/30 14:28:42 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdel_and_sub(char *s, unsigned int start, size_t len)
{
	char	*tmp;

	tmp = NULL;
	tmp = ft_strsub(s, start, len);
	ft_strdel(&s);
	return (tmp);
}
