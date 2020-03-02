/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 02:15:01 by lmartins          #+#    #+#             */
/*   Updated: 2020/03/02 11:31:51 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*cstr1;
	char	*cstr2;
	size_t	i;

	cstr1 = (char *)str1;
	cstr2 = (char *)str2;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		cstr1[i] = cstr2[i];
		i++;
	}
	return (cstr1);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	if (dst == src)
		return (dst);
	if (src > dst)
	{
		dst = ft_memcpy(dst, src, len);
		return (dst);
	}
	cdst = (char *)dst;
	csrc = (char *)src;
	while (len-- > 0)
		cdst[len] = csrc[len];
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cs;
	char	*substring;

	cs = (char *)s;
	if (!(cs))
		return (0);
	if (start > (unsigned int)get_len(cs))
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
	if (!(string = malloc((get_len(s1) + get_len(s2) + 1) * sizeof(char))))
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

