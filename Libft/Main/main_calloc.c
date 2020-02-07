/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 02:15:47 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/07 02:15:47 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	int *resp1;
	int *resp2;
	char *resp3;
	char *resp4;
	int size_int;
	int size_char;
	int i;
	
	size_int = 3;
	size_char = 7;
	resp1 = ft_calloc(size_int, sizeof(int));
	resp2 = calloc(size_int, sizeof(int));
	resp3 = ft_calloc(size_char, sizeof(char));
	resp4 = calloc(size_char, sizeof(char));

	i = 0;
	printf("Ft: ");
	while (i <= size_int)
	{
		printf("%d", resp1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("Calloc: ");
	while (i <= size_int)
	{
		printf("%d", resp2[i]);
		i++;
	}
	printf("\n");	
	i = 0;
	printf("Ft: ");
	while (i <= size_int)
	{
		printf("%c", resp3[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("Calloc: ");
	while (i <= size_int)
	{
		printf("%c", resp4[i]);
		i++;
	}
	printf("\n");
	return (0);
}