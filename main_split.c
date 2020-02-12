/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 03:07:45 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/12 03:07:45 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	size_t	i;
	char	**resp;
	char	*string1 = "Taj Mahal is a historic monument in India.";

	resp = ft_split(string1, ' ');
	i = 0;
	while (i <= ft_count_words(string1, ' '))
	{
		printf("Ft: %s\n", resp[i]);
		i++;
	}
	return (0);
}
