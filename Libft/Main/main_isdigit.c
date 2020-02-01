/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:33:42 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:33:42 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("ft_isdigit - 0: %d\n", ft_isdigit(0));
	printf("isdigit - 0: %d\n", isdigit(0));
	printf("ft_isdigit - 1: %d\n", ft_isdigit(1));
	printf("isdigit - 1: %d\n", isdigit(1));
	printf("ft_isdigit - 0: %d\n", ft_isdigit('0'));
	printf("isdigit - 0: %d\n", isdigit('0'));
	printf("ft_isdigit - 1: %d\n", ft_isdigit('1'));
	printf("isdigit - 1: %d\n", isdigit('1'));
	printf("ft_isdigit - a: %d\n", ft_isdigit('a'));
	printf("isdigit - a: %d\n", isdigit('a'));
	printf("ft_isdigit - g: %d\n", ft_isdigit('g'));
	printf("isdigit - g: %d\n", isdigit('g'));
	printf("ft_isdigit - z: %d\n", ft_isdigit('z'));
	printf("isdigit - z: %d\n", isdigit('z'));
	printf("ft_isdigit - A: %d\n", ft_isdigit('A'));
	printf("isdigit - A: %d\n", isdigit('A'));
	printf("ft_isdigit - G: %d\n", ft_isdigit('G'));
	printf("isdigit - G: %d\n", isdigit('G'));
	printf("ft_isdigit - Z: %d\n", ft_isdigit('Z'));
	printf("isdigit - Z: %d\n", isdigit('Z'));
	return (0);
}