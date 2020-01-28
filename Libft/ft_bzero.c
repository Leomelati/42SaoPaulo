/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:59:18 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/28 11:02:41 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
