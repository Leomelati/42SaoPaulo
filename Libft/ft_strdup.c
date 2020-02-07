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

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*cs1;
	char	*p;

	size = ft_strlen(s1) + 1;
	cs1 = (char *)s1;
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, size);
	return (p);
}
