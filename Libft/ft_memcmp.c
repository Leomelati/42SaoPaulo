/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:37:15 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/12 13:04:24 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t			i;
	size_t			result;
	size_t			count;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	result = 0;
	count = 0;
	while (i < n)
	{
		if ((unsigned char)cs1[i] != (unsigned char)cs2[i] && count < 2)
		{
			result = result + ((unsigned char)cs2[i] - (unsigned char)cs1[i]);
			count++;
		}
		i++;
	}
	if (result == 0)
		return (0);
	return (count);
}
