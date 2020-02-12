/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:07:45 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/12 12:22:30 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
size_t	ft_count_words(char *s, char c);

int		main(void)
{
	size_t	i;
	char	**resp;
	char	*string1 = "lorem ipsum dolor sit amet";
	char	set = ' ';

	resp = ft_split(string1, set);
	i = 0;
	while (i <= ft_count_words(string1, set))
	{
		printf("Ft: %s\n", resp[i]);
		i++;
	}
	return (0);
}
