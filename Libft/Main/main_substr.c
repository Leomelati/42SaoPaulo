/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:11:09 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/09 17:11:09 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char *dest1;
	char string1[60] = "Taj Mahal is a historic monument in India.";
    int inicio = 1;
    int tamanho = 4;

	dest1 = ft_substr(string1, inicio, tamanho);
	printf("Ft: %s\n", dest1);
	return (0);
}