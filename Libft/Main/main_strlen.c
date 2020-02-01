/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:35:01 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:35:01 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str1[] = "banana";

    printf("Strlen: %lu\n", strlen(str1));
    printf("ft_strlen: %lu\n", ft_strlen(str1));

	return (0);
}