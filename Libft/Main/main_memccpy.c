/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:33:55 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/01 20:33:55 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:52:33 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/30 12:52:43 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	char dest1[61];
	char dest2[61];
	char dest3[61];
	char dest4[61];
	char string1[60] = "Taj Mahal is a historic monument in India.";
	char string2[60] = "Taj Mahal is a historic monument in India.";
	char string3[60] = "Taj Mahal is a historic monument in India.";
	char string4[60] = "Taj Mahal is a historic monument in India.";

	ft_memccpy(dest1, string1, 'c', 42);
	memccpy(dest2, string2, 'c', 42);
	ft_memccpy(dest3, string3, 'z', 42);
	memccpy(dest4, string4, 'z', 42);
	
	printf("Ft: %s\n", dest1);
	printf("Função: %s\n", dest2);
	printf("Ft: %s\n", dest3);
	printf("Função: %s\n", dest4);
	return (0);
}
