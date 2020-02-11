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

#include <stdio.h>
#include "libft.h"

int     ft_count_words(char *s)
{
    size_t  qnt;
    size_t  i;

    qnt = 0;
    i = 0;
    while (i <= ft_strlen(s))
    {
        if (s[i] == ' ' && )
        i++;
    }
    return (qnt);
}

char	**ft_split(char const *s, char c)
{



}

int		main(void)
{
	char	*resp;
	char	*string1 = "Taj Mahal is a historic monument in India.";

	resp = ft_split(string1, ' ');
	printf("Ft: %s\n", resp);
	return (0);
}
