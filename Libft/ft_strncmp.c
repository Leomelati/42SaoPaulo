/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:57:23 by lmartins          #+#    #+#             */
/*   Updated: 2020/01/28 12:21:53 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int ret;

	ret = 0;
	while ((n != '\0') && (*str1 != '\0') && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	if (n != 0)
	{
		ret = (*str1 - *str2);
	}
	return (ret);
}
