/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:57:22 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 12:40:31 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*chaystack;
	char	*cneedle;

	i = 0;
	chaystack = (char *)haystack;
	cneedle = (char *)needle;
	if (cneedle[i] == '\0')
		return (chaystack);
	else if (len <= 0)
		return (0);
	while (i <= len - ft_strlen(cneedle))
	{
		if (chaystack[0] == cneedle[0] &&
			ft_strncmp(chaystack, cneedle, ft_strlen(cneedle)) == 0)
			return ((char *)chaystack);
		chaystack++;
		i++;
	}
	return (0);
}
