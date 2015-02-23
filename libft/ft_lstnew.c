/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:50:22 by pdecrat           #+#    #+#             */
/*   Updated: 2014/11/10 20:06:44 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*result;

	if (!(result = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	result->content = ft_memalloc(content_size);
	if (content)
	{
		result->content = ft_memcpy(result->content, content, content_size);
		result->content_size = content_size;
	}
	else
	{
		result->content = NULL;
		result->content_size = 0;
	}
	result->next = NULL;
	return (result);
}
