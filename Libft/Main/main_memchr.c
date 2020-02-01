/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:32:49 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:32:49 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

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

	resp1 = ft_memchr(string1, 'j', 5);
	resp2 = memchr(string2, 'j', 5);
	resp3 = ft_memchr(string3, 'z', 5);
	resp4 = memchr(string4, 'z', 5);
	
	printf("Ft: %s\n", resp1);
	printf("Original: %s\n", resp2);
	printf("Ft: %s\n", resp3);
	printf("Original: %s\n", resp4);
	return (0);
}