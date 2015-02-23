/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:06:54 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/10 19:23:53 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlen(char const *s)
{
	size_t		length;

	length = 0;
	if (s)
		while (s[length])
			length++;
	return (length);
}
