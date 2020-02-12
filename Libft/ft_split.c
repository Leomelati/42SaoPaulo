/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:30:35 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 11:33:26 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t     ft_word_len(char *s, char c)
{

	size_t	i;

	i = 0;
	while (s[i] != c && i <= ft_strlen(s))
	{
		i++;
	}
	i++;
	return (i);
}

size_t     ft_count_words(char *s, char c)
{
    size_t  qnt;
    size_t  i;

    qnt = 0;
    i = 0;
    while (i <= ft_strlen(s))
    {
        if (s[i] == c && s[i - 1] != c)
			qnt++;
        i++;
    }
    return (qnt);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;
	size_t	i;
	size_t	j;
	size_t	temp;

	words = ft_count_words((char *)s, c);
	array = malloc(words * sizeof(char *));
	i = 0;
	while (i <= words)
	{
		array[i] = malloc((ft_word_len((char *)s, c) + 1) * sizeof(char));
		i++;
	}
	i = 0;
	j = 0;
	while (i <= words)
	{
		temp = 0;
		while ((char)s[j] != c && j <= ft_strlen(s))
		{
			array[i][temp] = s[j];
			j++;
			temp++;
		}
		j++;
		i++;
	}
	return (array);
}
