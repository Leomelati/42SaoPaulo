/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:30:35 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/12 12:22:07 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_fill(char **array, size_t words, char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	temp;

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
}

size_t	ft_word_len(char *s, char c)
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

size_t	ft_count_words(char *s, char c)
{
	size_t	qnt;
	size_t	i;

	qnt = 1;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c && s[i - 1] != c)
			qnt++;
		// printf("testei %c e meu qnt é: %zu\n", s[i], qnt);
		i++;
	}
	return (qnt);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;
	size_t	i;

	words = ft_count_words((char *)s, c);
	printf("words: %zu\n", words);
	array = malloc(words * sizeof(char *));
	i = 0;
	while (i <= words)
	{
		array[i] = malloc((ft_word_len((char *)s, c) + 1) * sizeof(char));
		i++;
	}
	ft_fill(array, words, (char *)s, c);
	return (array);
}
