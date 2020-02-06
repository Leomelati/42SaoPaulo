/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:40:40 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 11:40:41 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char string1[10] = "Taj Mahal";
	char string2[10] = "Taj Mahal";
	char string3[10] = "Taj Mahal";
	char string4[10] = "Taj Mahal";
	char string5[10] = "Taj Mahal";
	char string6[10] = "Taj Mahal";
	char sub1[6] = "Mahal";
	char sub2[6] = "Mahal";
	char sub3[6] = "Majal";
	char sub4[6] = "Majal";
	char sub5[6] = "";
	char sub6[6] = "";
    char *resp1;
    char *resp2;
    char *resp3;
    char *resp4;
    char *resp5;
    char *resp6;

	resp1 = ft_strnstr(string1, sub1, 15);
	resp2 = strnstr(string2, sub2, 15);
	resp3 = ft_strnstr(string3, sub3, 15);
	resp4 = strnstr(string4, sub4, 15);
	resp5 = ft_strnstr(string5, sub5, 15);
	resp6 = strnstr(string6, sub6, 15);
	
	printf("Ft: %s\n", resp1);
	printf("Original: %s\n", resp2);
	printf("Ft: %s\n", resp3);
	printf("Original: %s\n", resp4);
	printf("Ft: %s\n", resp5);
	printf("Original: %s\n", resp6);
	return (0);
}