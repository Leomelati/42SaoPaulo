/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:39:42 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 12:54:51 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*p;

	bytes = nmemb * size;
	p = malloc(bytes);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, bytes);
	return (p);
}
