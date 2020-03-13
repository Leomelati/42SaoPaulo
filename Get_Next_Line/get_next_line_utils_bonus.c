/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 02:15:01 by lmartins          #+#    #+#             */
/*   Updated: 2020/03/13 11:46:10 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*cs;

	i = 0;
	cs = (char *)s;
	while (i <= ft_strlen(cs))
	{
		if (cs[i] == (char)c)
			return (&cs[i]);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	unsigned int cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cs;
	char	*substring;

	cs = (char *)s;
	if (!(cs))
		return (0);
	if (start > (unsigned int)ft_strlen(cs))
	{
		if (!(substring = malloc(1)))
			return (0);
		substring[0] = '\0';
		return (substring);
	}
	if (!(substring = malloc((len + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (i < len && cs[start])
	{
		substring[i] = cs[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*p;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(p = malloc((i + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*string;

	if (!(s1))
		return (ft_strdup(s2));
	if (!(string = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		string[i] = s2[j];
		j++;
		i++;
	}
	string[i] = '\0';
	return (string);
}
