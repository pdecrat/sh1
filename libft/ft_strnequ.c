/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:20:59 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 15:51:05 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n && s1 && s2 && s1[i] == s2[i])
		i++;
	if (i == n)
		return (1);
	else
		return (0);
}
