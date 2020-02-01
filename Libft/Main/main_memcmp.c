/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:59:06 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:59:06 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int		main (void)
{
	printf("Ft: %i\n" ,ft_memcmp("abcde", "abcde", 5));
	printf("Original: %i\n" ,ft_memcmp("abcde", "abcde", 5));
	printf("Ft: %i\n" ,ft_memcmp("abcde", "ABCDE", 5));
	printf("Original: %i\n" ,ft_memcmp("abcde", "ABCDE", 5));
	printf("Ft: %i\n" ,ft_memcmp("ABCDE", "abcde", 5));
	printf("Original: %i\n" ,ft_memcmp("ABCDE", "abcde", 5));
	printf("Ft: %i\n" ,ft_memcmp("aaaba", "aaaca", 5));
	printf("Original: %i\n" ,ft_memcmp("aaaba", "aaaca", 5));
	return(0);
}