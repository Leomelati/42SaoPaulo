/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:01:23 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 11:53:56 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
			size_t dstsize)
{
	size_t i;

	if (dstsize <= 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dstsize - 1 && i <= ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (ft_strlen(src));
}
