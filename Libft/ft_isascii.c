/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:20:56 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/05 12:27:29 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isascii(int c)
{
	int inicial;
	int octal_final;

	inicial = 0;
	octal_final = 0177;
	if (c >= inicial && c <= octal_final)
		return (1);
	return (0);
}
