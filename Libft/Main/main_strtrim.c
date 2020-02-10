/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:26:44 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/10 13:26:45 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	*string = "xxzxzTaj Mahalxzzzx";
	char	*set = "zx";
	char	*resp;

	resp = ft_strtrim(string, set);
	printf("%s\n", resp);
	return (0);
}
