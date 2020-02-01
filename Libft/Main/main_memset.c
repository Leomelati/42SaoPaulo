/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:34:12 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:34:12 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str1[] = "banana";
    char str2[] = "banana";

    memset(str1, '.', 4);
    ft_memset(str2, '.', 4);

    printf("Memset: %s\n", str1);
    printf("ft_memset: %s\n", str2);
}