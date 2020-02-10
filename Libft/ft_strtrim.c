/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:01:06 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 13:26:40 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_copy_part(char *dest, char *src, size_t end)
{
	size_t	i;

	i = 0;
	while (i <= end)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_in(char c, char *set)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(set))
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	char	*cs1;
	char	*cset;
	size_t	start;
	size_t	end;

	start = 0;
	cs1 = (char *)s1;
	cset = (char *)set;
	end = ft_strlen(cs1);
	while (ft_in(cs1[start], cset) == 0)
	{
		start++;
	}
	while (ft_in(cs1[end], cset) == 0)
	{
		end--;
	}
	string = malloc((end - start + 1) * sizeof(char));
	string = ft_copy_part(string, &cs1[start], end - start);
	return (string);
}
