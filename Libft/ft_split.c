/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:30:35 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/09 18:30:35 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{



}

int		main(void)
{
	char	*resp;
	char	*string1 = "Taj Mahal is a historic monument in India.";

	resp = ft_split(string1, ' ');
	printf("Ft: %s\n", resp);
	return (0);
}
