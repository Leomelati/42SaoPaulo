/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:57:23 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/07 13:10:03 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && (*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n != 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
