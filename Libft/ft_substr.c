/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:32:47 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 11:56:39 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cs;
	char	*substring;

	i = 0;
	cs = (char *)s;
	substring = malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (0);
	while (i < len)
	{
		substring[i] = cs[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
