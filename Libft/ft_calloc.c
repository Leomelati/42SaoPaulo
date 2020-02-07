/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:39:42 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/07 01:39:42 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	bytes = nmemb * size;
	p = malloc(bytes);
	ft_memset(p, 0, bytes);
	return (p);
}
