/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 02:15:01 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/25 02:15:01 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	size_t	i;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (csrc > cdst)
	{
		i = len - 1;
		while (i > 0)
		{
			cdst[i] = csrc[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cs;
	char	*substring;

	cs = (char *)s;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		substring[i] = cs[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*cs1;
	char	*p;
	int		i;

	size = ft_strlen(s1) + 1;
	cs1 = (char *)s1;
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (p[i])
	{
		p[i] = cs1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*join_str(char *str, char *buffer)
{
	char		*array;
	size_t		len_str;
	size_t		len_buff;
	size_t			i;

	if (!str)
		return (ft_strdup(buffer));
	len_buff = ft_strlen(buffer);
	len_str = ft_strlen(str);
	array = (char *)malloc((len_str + len_buff + 1) * sizeof(char));
	i = 0;
	while (i++ <= len_str)
		array[i] = str[i];
	free(str);
	str = NULL;
	array[i + len_buff] = '\0';
	while (len_buff--)
		array[i + len_buff] = buffer[len_buff];
	return (array);
}
