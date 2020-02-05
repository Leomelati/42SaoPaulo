/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:27:30 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 12:27:31 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int		main(void)
{
	printf("ft_isascii - 0: %d\n", ft_isascii(0));
	printf("isascii - 0: %d\n", isascii(0));
	printf("ft_isascii - 1: %d\n", ft_isascii(1));
	printf("isascii - 1: %d\n", isascii(1));
	printf("ft_isascii - 0: %d\n", ft_isascii('0'));
	printf("isascii - 0: %d\n", isascii('0'));
	printf("ft_isascii - 1: %d\n", ft_isascii('1'));
	printf("isascii - 1: %d\n", isascii('1'));
	printf("ft_isascii - a: %d\n", ft_isascii('a'));
	printf("isascii - a: %d\n", isascii('a'));
	printf("ft_isascii - g: %d\n", ft_isascii('g'));
	printf("isascii - g: %d\n", isascii('g'));
	printf("ft_isascii - z: %d\n", ft_isascii('z'));
	printf("isascii - z: %d\n", isascii('z'));
	printf("ft_isascii - A: %d\n", ft_isascii('A'));
	printf("isascii - A: %d\n", isascii('A'));
	printf("ft_isascii - G: %d\n", ft_isascii('G'));
	printf("isascii - G: %d\n", isascii('G'));
	printf("ft_isascii - Z: %d\n", ft_isascii('Z'));
	printf("isascii - Z: %d\n", isascii('Z'));
	return (0);
}