/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:59:35 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/09 17:59:35 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char s1[] = "string1";
	char s2[] = "string2";
	char *resp;
	
	resp = ft_strjoin(s1, s2);
	printf("Ft: %s\n", resp);
	return (0);
}