/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:18:44 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/07 11:50:43 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	size_t	i;
	char	*p;

	size = ft_strlen(src) + 1;
	if (!(p = malloc(size * sizeof(char))))
		return (0);
	while (i < size)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
