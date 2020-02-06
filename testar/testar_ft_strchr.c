/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:27:56 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 21:27:56 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int    i;
	char            *cstr;
	char            *result;

	i = 0;
	cstr = (char *)str;
	result = NULL;
	while (cstr[i] != '\0')
	{
		if (cstr[i] == c)
		{
			result = &cstr[i];
			return (result);
		}
		i++;
	}
	return (result);
}

int		main(void)
{
	char string1[10] = "Taj Mahal";
	char string2[10] = "Taj Mahal";
	char string3[10] = "Taj Mahal";
	char string4[10] = "Taj Mahal";
    char *resp1;
    char *resp2;
    char *resp3;
    char *resp4;

	resp1 = ft_strchr(string1, 'j');
	resp2 = strchr(string2, 'j');
	resp3 = ft_strchr(string3, 'z');
	resp4 = strchr(string4, 'z');
	
	printf("Ft: %s\n", resp1);
	printf("Original: %s\n", resp2);
	printf("Ft: %s\n", resp3);
	printf("Original: %s\n", resp4);
	return (0);
}