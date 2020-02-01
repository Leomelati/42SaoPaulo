/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:33:32 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:33:32 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char str1[] = "banana";
    char str2[] = "banana";

    bzero(str1, 4);
    ft_bzero(str2, 4);

    printf("Bzero: %s\n", str1);
    printf("ft_bzero: %s\n", str2);
}
