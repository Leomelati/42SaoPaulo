/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:57:22 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 12:40:31 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *little, size_t len)
{
	size_t	i;
	char	*cstr;
	char	*clittle;

	cstr = (char *)str;
	clittle = (char *)little;
	if (clittle[i] == '\0')
		return (cstr);
	i = 0;
	while (i < len && cstr[i] != '\0')
	{
		if (cstr[0] == clittle[0] &&
			ft_strncmp(cstr, clittle, ft_strlen(clittle)) == 0)
			return ((char *)cstr);
		cstr++;
		i++;
	}
	return (0);
}
