/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:43:24 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 15:57:33 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countword(char const *s, char c)
{
	unsigned int	is_word;
	unsigned int	word_nb;

	is_word = 0;
	word_nb = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c && is_word != 0)
			word_nb++;
		is_word = (*s == c) ? 0 : 1;
		s++;
	}
	return (word_nb + is_word);
}
