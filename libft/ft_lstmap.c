/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:40:40 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/09 16:02:32 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*result;
	t_list		*cursor;

	if (lst)
	{
		result = ft_lstcpy(lst);
		cursor = result;
		while (cursor)
		{
			cursor = (*f)(cursor);
			ft_putstr((char *)cursor->content);
			cursor = cursor->next;
		}
	}
	return (result);
}
