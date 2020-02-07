/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:46:53 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/07 11:47:31 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char	*resp1;
	char	*resp2;
	char	*resp3;
	char	*resp4;
	const char	*string1 = "Taj Mahal";
	const char	*string2 = "Taj Mahal";
	const char	*string3 = "";
	const char	*string4 = "";
	
	resp1 = ft_strdup(string1);
	resp2 = strdup(string2);
	resp3 = ft_strdup(string3);
	resp4 = strdup(string4);
	printf("Ft: %s\n", resp1);
	printf("Strdup: %s\n", resp2);
	printf("Ft: %s\n", resp3);
	printf("Strdup: %s\n", resp4);
	return (0);
}