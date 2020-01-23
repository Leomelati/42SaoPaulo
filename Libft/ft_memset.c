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
