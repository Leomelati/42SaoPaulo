/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 02:14:58 by lmartins          #+#    #+#             */
/*   Updated: 2020/03/13 11:45:07 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_strdel(char **str)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
	}
}

int		get_line(char **str, char **line, int ret)
{
	int		i;
	char	*temp;

	if (ret < 0)
		return (-1);
	else if (ret == 0 && *str[0] == '\0')
	{
		*line = ft_strdup("");
		ft_strdel(str);
		return (0);
	}
	i = 0;
	while ((*str)[i] != '\n' && (*str)[i] != '\0')
		i++;
	*line = ft_substr(*str, 0, i);
	if ((*str)[i] == '\n')
	{
		temp = ft_strdup(*str + i + 1);
		free(*str);
		*str = temp;
		return (1);
	}
	ft_strdel(str);
	return (0);
}

int		get_next_line(int fd, char **line)
{
	int				ret;
	static char		*str[OPEN_MAX];
	char			*buffer;
	char			*temp;

	if (BUFFER_SIZE < 1 || !line || fd < 0)
		return (-1);
	if (!(str[fd]))
		if (!(str[fd] = ft_strdup("")))
			return (-1);
	if (!(buffer = malloc((BUFFER_SIZE + 1) * sizeof(*buffer))))
		return (-1);
	while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		temp = ft_strjoin(str[fd], buffer);
		ft_strdel(&str[fd]);
		str[fd] = temp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (get_line(&(str[fd]), line, ret));
}
