/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdecrat <pdecrat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 22:58:00 by pdecrat           #+#    #+#             */
/*   Updated: 2015/02/23 16:24:29 by pdecrat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>

int		ft_get_line(char **tmp, char *src, char **line, char **left)
{
	int				ret;
	unsigned int	i;

	i = 0;
	ret = 0;
	while (src[i] && ret == 0)
	{
		if (src[i] == '\n')
		{
			*line = (*tmp) ? ft_strjoin(*tmp, ft_strsub(src, 0, i))
				: ft_strsub(src, 0, i);
			ret = 1;
		}
		i++;
	}
	if (ret == 0)
		*tmp = (*tmp) ? JOIN(*tmp, ft_strdup(src)) : ft_strdup(src);
	else
		*left = ft_strsub(src, i, ft_strlen(src) - i);
	return (ret);
}

int		ft_read_file(char **tmp, int const fd, char **line, char **left)
{
	int				ret;
	char			buf[BUFF_SIZE];

	ret = 0;
	while (ret == 0 && (ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ret = ft_get_line(tmp, buf, line, left);
	}
	if (ret == 0 && *tmp && **tmp)
		*line = ft_strdup(*tmp);
	return (ret);
}

int		get_next_line(int const fd, char **line)
{
	static char		*left[255];
	char			*tmp;
	int				ret;

	if (fd < 0 || !line || BUFF_SIZE > 8000000)
		return (-1);
	*line = NULL;
	ret = 0;
	tmp = NULL;
	if (left[fd])
		ret = ft_get_line(&tmp, left[fd], line, &left[fd]);
	if (ret == 0)
		ret = ft_read_file(&tmp, fd, line, &left[fd]);
	if (tmp)
		ft_strdel(&tmp);
	if (ret == 0 && left[fd])
		ft_strdel(&left[fd]);
	return (ret);
}
