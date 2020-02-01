/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:18:14 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:18:14 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    char *result;
    char *cstr;
    size_t i;

    result = NULL;
    cstr = (char *)str;
    i = 0;
    while (i < n)
    {
        if (cstr[i] == c)
        {
            result = &cstr[i];
            return (result);
        }
        i++;
    }
    return (result);
}
