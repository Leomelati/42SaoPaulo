/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:54:45 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 10:54:55 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char dest1[20] = "banana";
	char dest2[20] = "banana";
	char src1[6] = " aouro";
	char src2[6] = " aouro";
	
	ft_strlcpy(dest1, src1, 5);
	strlcpy(dest2, src2, 5);
	printf("Ft: %s\n", dest1);
	printf("Original: %s\n", dest2);

	return (0);
}