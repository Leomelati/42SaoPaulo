/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:59:06 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/17 11:03:12 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int		main (void)
{
	printf("Ft: %i\n" ,ft_memcmp("salut", "salut", 5));
	printf("Original: %i\n" ,ft_memcmp("salut", "salut", 5));
	printf("Ft: %i\n" ,ft_memcmp("t\200", "t\0", 2));
	printf("Original: %i\n" ,ft_memcmp("t\200", "t\0", 2));
	printf("Ft: %i\n" ,ft_memcmp("testss", "test", 5));
	printf("Original: %i\n" ,ft_memcmp("testss", "test", 5));
	printf("Ft: %i\n" ,ft_memcmp("test", "tEst", 4));
	printf("Original: %i\n" ,ft_memcmp("test", "tEst", 4));
	printf("Ft: %i\n" ,ft_memcmp("", "test", 4));
	printf("Original: %i\n" ,ft_memcmp("", "test", 4));
	printf("Ft: %i\n" ,ft_memcmp("test", "", 4));
	printf("Original: %i\n" ,ft_memcmp("test", "", 4));
	printf("Ft: %i\n" ,ft_memcmp("abcdefgh", "abcdwxyz", 6));
	printf("Original: %i\n" ,ft_memcmp("abcdefgh", "abcdwxyz", 6));
	return(0);
}