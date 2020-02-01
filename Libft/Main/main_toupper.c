/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:50:27 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/28 10:52:17 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("ft: %c\n", ft_toupper('M'));
	printf("função: %c\n", toupper('M'));
	printf("ft: %c\n", ft_toupper('m'));
	printf("função: %c\n", toupper('m'));
	printf("ft: %c\n", ft_toupper('+'));
	printf("função: %c\n", toupper('+'));
	printf("ft: %c\n", ft_toupper(' '));
	printf("função: %c\n", toupper(' '));
	printf("ft: %c\n", ft_toupper('5'));
	printf("função: %c\n", toupper('5'));
	return (0);
}