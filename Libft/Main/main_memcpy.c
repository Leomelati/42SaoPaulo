/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:42:53 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/30 11:42:54 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char str1[100] = "test string"; 
	char str2[100] = "test string";
	char dest1[100] = "temp";
	char dest2[100] = "temp";
	
	printf("Antes da Ft: %s\n", dest1);
	ft_memcpy(dest1, str1, 100);
	printf("Depois da Ft: %s\n", dest1);
	printf("Antes da Função: %s\n", dest2);
	memcpy(dest2, str2, 100);
	printf("Depois da Função: %s\n", dest2);	

	return (0);
}