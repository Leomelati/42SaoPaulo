/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:14:47 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/23 12:14:47 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

// void    ft_bzero(void *ptr, size_t n)
// {
//     unsigned int i;
//     char *array;

//     i = 0;
//     array = (char *)ptr;
//     while (i < n)
//     {
//         array[i] = '\0';
//         i++;
//     }
// }

int main()
{
    char str[50] = "banana";

    // ft_bzero(str, 2);
    bzero(str, 2);
    printf("str: %s\n", str);
}