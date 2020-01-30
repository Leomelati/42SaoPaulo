/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:16:15 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/30 12:50:11 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*array;
	char			l;

	i = 0;
	array = (char *)b;
	l = c;
	while (i < len)
	{
		array[i] = l;
		i++;
	}
	return (b);
}
