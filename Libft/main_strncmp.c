/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:21:55 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/28 12:21:56 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main()
{
	char dest1[] = "baana";
	char dest2[] = "baana";
	char src1[] = "banana";
	char src2[] = "banana";
	
	printf("Ft: %d\n", ft_strncmp(dest1, src1, 3));
	printf("Função: %d\n", strncmp(dest2, src2, 3));

	return (0);
}