/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:33:49 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:33:49 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	printf("ft_isprint - 0: %d\n", ft_isprint(0));
	printf("isprint - 0: %d\n", isprint(0));
	printf("ft_isprint - 1: %d\n", ft_isprint(1));
	printf("isprint - 1: %d\n", isprint(1));
	printf("ft_isprint - \\n: %d\n", ft_isprint('\n'));
	printf("isprint - \\n: %d\n", isprint('\n'));	
	printf("ft_isprint - a: %d\n", ft_isprint('a'));
	printf("isprint - a: %d\n", isprint('a'));
	printf("ft_isprint - g: %d\n", ft_isprint('g'));
	printf("isprint - g: %d\n", isprint('g'));
	printf("ft_isprint - z: %d\n", ft_isprint('z'));
	printf("isprint - z: %d\n", isprint('z'));
	printf("ft_isprint - A: %d\n", ft_isprint('A'));
	printf("isprint - A: %d\n", isprint('A'));
	printf("ft_isprint - G: %d\n", ft_isprint('G'));
	printf("isprint - G: %d\n", isprint('G'));
	printf("ft_isprint - Z: %d\n", ft_isprint('Z'));
	printf("isprint - Z: %d\n", isprint('Z'));
}