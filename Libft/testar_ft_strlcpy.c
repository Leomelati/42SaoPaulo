/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 21:01:23 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 21:01:23 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while(i < size - 1)
	{
		dst[i] = src[i];
		i ++;
	}
	dst[size] = '\0';
	return (ft_strlen(src));
}

int main()
{
	char dest1[20] = "banana";
	char dest2[20] = "banana";
	char src1[6] = " ouro";
	char src2[6] = " ouro";
	
	ft_strlcpy(dest1, src1, 3);
	strlcpy(dest2, src2, 3);
	printf("Ft: %s\n", dest1);
	printf("Original: %s\n", dest2);

	return (0);
}