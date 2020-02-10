/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:49:42 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 12:04:36 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*cs;
	char			*result;

	i = 0;
	cs = (char *)s;
	result = NULL;
	while (i <= ft_strlen(cs))
	{
		if (cs[i] == c)
		{
			result = &cs[i];
		}
		i++;
	}
	return (result);
}
