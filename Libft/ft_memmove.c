/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:26:53 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 12:35:49 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	size_t	i;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (cdst == csrc)
		return (cdst);
	if (csrc > cdst)
	{
		cdst = ft_memcpy(cdst, csrc, len);
		return (cdst);
	}
	while (len-- > 0)
		cdst[len] = csrc[len];
	return (dst);
}
