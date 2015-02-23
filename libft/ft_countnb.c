/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:26:17 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 15:57:05 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int			ft_countnb(int n)
{
	unsigned int	result;

	result = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		result++;
		n /= 10;
	}
	return (result);
}
