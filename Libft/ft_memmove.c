/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:26:53 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 19:26:53 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *srd, size_t n)
{
    char *cdest;
    char *csrd;
    size_t i;

    cdest = (char *)dest;
    csrd = (char *)srd;
    if (csrd > cdest)
    {
        i = 0;
        while (i < n)
        {
            cdest[i] = csrd[i];
            i++;
        }
    } else 
    {
        while (n--)
        {
            cdest[n] = csrd[n];
        }
    }
    return (dest);
}
