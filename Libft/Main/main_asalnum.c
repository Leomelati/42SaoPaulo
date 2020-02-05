/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_asalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:19:58 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 12:19:59 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int		main(void)
{
	printf("ft_isalnum - 0: %d\n", ft_isalnum(0));
	printf("isalnum - 0: %d\n", isalnum(0));
	printf("ft_isalnum - 1: %d\n", ft_isalnum(1));
	printf("isalnum - 1: %d\n", isalnum(1));
	printf("ft_isalnum - 0: %d\n", ft_isalnum('0'));
	printf("isalnum - 0: %d\n", isalnum('0'));
	printf("ft_isalnum - 1: %d\n", ft_isalnum('1'));
	printf("isalnum - 1: %d\n", isalnum('1'));
	printf("ft_isalnum - a: %d\n", ft_isalnum('a'));
	printf("isalnum - a: %d\n", isalnum('a'));
	printf("ft_isalnum - g: %d\n", ft_isalnum('g'));
	printf("isalnum - g: %d\n", isalnum('g'));
	printf("ft_isalnum - z: %d\n", ft_isalnum('z'));
	printf("isalnum - z: %d\n", isalnum('z'));
	printf("ft_isalnum - A: %d\n", ft_isalnum('A'));
	printf("isalnum - A: %d\n", isalnum('A'));
	printf("ft_isalnum - G: %d\n", ft_isalnum('G'));
	printf("isalnum - G: %d\n", isalnum('G'));
	printf("ft_isalnum - Z: %d\n", ft_isalnum('Z'));
	printf("isalnum - Z: %d\n", isalnum('Z'));
	return (0);
}