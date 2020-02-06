/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:13:43 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 12:31:23 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
			int c, size_t n)
{
	size_t	i;
	char	*cdst;
	char	*csrc;
	char	*result;

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	result = NULL;
	while (i <= n && csrc[i] != c)
	{
		cdst[i] = csrc[i];
		i++;
	}
	if (i != n)
		result = &cdst[i + 1];
	return (result);
}
