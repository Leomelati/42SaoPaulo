/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:58:06 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 19:58:06 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{

    char str1[] = "String 1";
    char str2[] = "String 2";
    char str3[] = "String 1";
    char str4[] = "String 2";

    ft_memmove(str1, str2, sizeof(str2));
    memmove(str3, str4, sizeof(str4));

    printf("Ft: %s\n", str1);
    printf("Original: %s\n", str3);

    return (0);
}
