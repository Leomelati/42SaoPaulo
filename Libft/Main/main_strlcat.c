/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:12:59 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/28 12:13:10 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char dest1[20] = "banana";
	char dest2[20] = "banana";
	char src1[6] = " ouro";
	char src2[6] = " ouro";
	
	ft_strlcat(dest1, src1, 20);
	strlcat(dest2, src2, 20);
	printf("Ft: %s\n", dest1);
	printf("Função: %s\n", dest2);

	return (0);
}