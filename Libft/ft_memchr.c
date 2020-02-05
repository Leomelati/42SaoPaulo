/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:18:14 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 12:32:32 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*result;
	char	*cs;
	size_t	i;

	result = NULL;
	cs = (char *)s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == c)
		{
			result = &cs[i];
			return (result);
		}
		i++;
	}
	return (result);
}
