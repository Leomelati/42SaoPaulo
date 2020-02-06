/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:57:22 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 12:39:12 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*resp;
	char	*chaystack;
	char	*cneedle;

	i = 0;
	chaystack = (char *)haystack;
	cneedle = (char *)needle;
	if (cneedle[i] == '\0')
		return (chaystack);
	while (chaystack[i] != '\0' && i <= len)
	{
		resp = chaystack;
		if (chaystack[i] == cneedle[i] && i <= len)
		{
			resp = NULL;
			while (cneedle[i] == chaystack[i])
			{
				i++;
				if (cneedle[i] == '\0')
					return (resp);
			}
		}
	}
	return (resp);
}
