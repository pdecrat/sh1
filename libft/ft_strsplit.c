/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:38:04 by pdecrat           #+#    #+#             */
/*   Updated: 2015/01/31 17:02:13 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	word_nb;
	unsigned int	tab_nb;
	unsigned int	tmp;
	char			**res;

	i = 0;
	if (!s)
		return (NULL);
	word_nb = ft_countword(s, c);
	tab_nb = 0;
	if (!(res = (char **)ft_memalloc(sizeof(res) * word_nb + 1)))
		return (NULL);
	while (tab_nb < word_nb)
	{
		while (s[i] == c)
			i++;
		tmp = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		res[tab_nb] = ft_strsub(s, tmp, i - tmp);
		tab_nb++;
	}
	res[tab_nb] = '\0';
	return (res);
}
