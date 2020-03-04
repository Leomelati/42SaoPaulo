/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 02:14:58 by lmartins          #+#    #+#             */
/*   Updated: 2020/03/04 11:23:05 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	get_len(const char *str)
{
	unsigned int cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}

int		index_caract(char *buffer, int c)
{
	int		i;

	i = 0;
	while (buffer[i] != (char)c && buffer[i])
		i++;
	if (buffer[i] != (char)c)
		return (-1);
	return (i);
}

int		get_line(char **str, char **line, int i)
{
	int len;

	*line = ft_substr(*str, 0, i);
	i++;
	len = get_len(*str + 1) + 1;
	ft_memmove(*str, *str + i, len);
	if (*str[0] == '\0')
	{
		free(*str);
		*str = NULL;
	}
	return (1);
}


int		get_next_line(int fd, char **line)
{
	int				i;
	int				ret;
	static char		*str = NULL;
	char			buffer[BUFFER_SIZE + 1];

	if (BUFFER_SIZE < 1 || !line || read(fd, buffer, 0) < 0)
		return (-1);
	if (str && ((i = index_caract(str, '\n')) != -1))
		return (get_line(&str, line, i));
	while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		str = ft_strjoin(str, buffer);
		if ((i = index_caract(str, '\n')) != -1)
			return (get_line(&str, line, i));
	}
	if (str)
	{
		*line = ft_strdup(str);
		free(str);
		str = NULL;
	}
	*line = ft_strdup("");
	return (ret);
}
