/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:59:18 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/24 12:03:29 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    ft_bzero(void *ptr, size_t n)
{
    unsigned int i;
    char *array;

    i = 0;
    array = (char *)ptr;
    while (i < n)
    {
        array[i] = '\0';
        i++;
    }
}
