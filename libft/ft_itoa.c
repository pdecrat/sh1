/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:05:25 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 15:54:53 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	isneg;

	isneg = ft_isneg(n);
	len = ft_countnb(n) + isneg;
	str = ft_strnew(len);
	if (str)
	{
		while (len--)
		{
			if (len == 0 && isneg)
				str[len] = '-';
			else
			{
				if (isneg)
					str[len] = -(n % 10) + 48;
				else
					str[len] = (n % 10) + 48;
				n = n / 10;
			}
		}
		return (str);
	}
	return (NULL);
}
