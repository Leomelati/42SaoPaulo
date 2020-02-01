/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:37:15 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:37:15 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *cs1;
	char *cs2;
	size_t i;

	cs1 = (char *)s1;
	cs2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (cs1[i] < cs2[i])
			return (-1);
		else if (cs1[i] > cs2[i])
			return (1);
		i++;
	}
	return (0);
}
