/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:46:14 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/28 10:52:33 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("ft: %c\n", ft_tolower('M'));
	printf("função: %c\n", tolower('M'));
	printf("ft: %c\n", ft_tolower('m'));
	printf("função: %c\n", tolower('m'));
	printf("ft: %c\n", ft_tolower('+'));
	printf("função: %c\n", tolower('+'));
	printf("ft: %c\n", ft_tolower(' '));
	printf("função: %c\n", tolower(' '));
	printf("ft: %c\n", ft_tolower('5'));
	printf("função: %c\n", tolower('5'));
	return (0);
}