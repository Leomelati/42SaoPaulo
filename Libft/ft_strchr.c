/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:27:56 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 12:36:25 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*cs;
	char			*result;

	i = 0;
	cs = (char *)s;
	result = NULL;
	while (cs[i] != '\0')
	{
		if (cs[i] == c)
		{
			result = &cs[i];
			return (result);
		}
		i++;
	}
	return (result);
}
