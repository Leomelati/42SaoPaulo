/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 00:03:28 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/12 13:23:35 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h> 
#include "libft.h"

int		ft_space(char letter)
{
	if (letter == ' ' || letter == '\t' || letter == '\n' || letter == '\v' ||
		letter == '\f' || letter == '\r')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int		num;
	int		count;
	int		sinal;

	num = 0;
	count = 0;
	sinal = 1;
	while (ft_space(str[count]) != 0 && str[count] != '\0')
	{
		count++;
	}
	if (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sinal = -1;
		count++;
	}
	while (ft_isdigit(str[count]) == 1)
	{
		num = num * 10 + str[count] - '0';
		count++;
	}
	return (num * sinal);
}
