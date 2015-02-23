/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 18:16:55 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 16:00:03 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstcpy(t_list *lst)
{
	t_list			*result;

	if (lst)
	{
		result = ft_lstcpyone(lst);
		result->next = (lst->next != NULL) ? ft_lstcpy(lst->next) : NULL;
		return (result);
	}
	return (NULL);
}
