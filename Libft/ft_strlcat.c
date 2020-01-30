/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:58:52 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/30 12:04:58 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	dest_count;
	unsigned int	src_count;
	unsigned int	nt_count;

	dest_count = 0;
	src_count = 0;
	nt_count = 0;
	while (dst[dest_count] != '\0')
		dest_count++;
	while (src[src_count] != '\0')
		src_count++;
	if (dstsize <= dest_count)
		src_count += dstsize;
	else
		src_count += dest_count;
	while (src[nt_count] != '\0' && dest_count + 1 < dstsize)
	{
		dst[dest_count] = src[nt_count];
		dest_count++;
		nt_count++;
	}
	dst[dest_count] = '\0';
	return (src_count);
}
