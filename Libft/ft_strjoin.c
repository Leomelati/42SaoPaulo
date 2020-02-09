/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:12:16 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/09 17:12:16 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*string;
	char	*cs1;
	char	*cs2;
	
	cs1 = (char *)s1;
	cs2 = (char *)s2;
	string = malloc((ft_strlen(cs1) + ft_strlen(cs2) + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);    
	i = 0;
	while (cs1[i] != '\0')
	{
		string[i] = cs1[i];
		i++;
	}
	j = 0;
	while (cs2[j] != '\0')
	{
		string[i] = cs2[j];
		j++;
		i++;
	}
	string[i + 1] = '\0';
	return (string);
}
