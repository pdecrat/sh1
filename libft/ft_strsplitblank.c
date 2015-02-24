/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitblank.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 14:01:28 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/24 14:01:30 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbwordblank(const char *s)
{
	size_t	i;
	size_t	flag;

	if (!s)
		return (0);
	i = 0;
	flag = 1;
	while (*s)
	{
		if (!ft_isspace(*s) && flag)
		{
			i++;
			flag = 0;
		}
		if (ft_isspace(*s) && !flag)
			flag = 1;
		s++;
	}
	return (i);
}

static void	ft_feedtab(char **tab, const char *s)
{
	size_t	flag;
	size_t	i;
	size_t	start;

	start = 0;
	flag = 1;
	i = 0;
	while (s[i])
	{
		if (!ft_isspace(s[i]) && flag)
		{
			start = i;
			flag = 0;
		}
		if (ft_isspace(s[i]) && !flag)
		{
			*tab = ft_strsub(s, start, i - start);
			tab++;
			flag = 1;
		}
		i++;
	}
	if (!flag)
		*tab = ft_strsub(s, start, i - start);
}

char		**ft_strsplitblank(char const *s)
{
	size_t	nbword;
	char	**tab;

	if (!s)
		return (NULL);
	nbword = ft_nbwordblank(s) + 1;
	if (nbword == 1)
		return (NULL);
	tab = (char **)ft_memalloc(sizeof(char *) * nbword);
	if (tab)
	{
		ft_feedtab(tab, s);
		tab[nbword - 1] = '\0';
	}
	return (tab);
}
