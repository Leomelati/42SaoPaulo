/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:16:15 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/23 10:16:15 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void    ft_memset(void *ptr, int x, size_t n)
{
    unsigned int i;
    char *array;
    char l;

    i = 0;
    array = (char *)ptr;
    l = x;
    while (i < n)
    {
        array[i] = l;
        i++;
    }

}

int  main(void)
{
    char str1[50] = "banana";
    printf("Before: %s\n", str1);

    ft_memset(str1, '.', 3*sizeof(char));

    printf("After: %s\n", str1);
}