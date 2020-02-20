/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:50:01 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/20 11:50:01 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	t_list *a = NULL;
	t_list *b = NULL;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	a->content = "cde";
	b->content = "ab";
	ft_lstadd_front(&a, b);
	while (a != NULL)
	{
		printf("%s ", a->content);
		a = a->next;
	}
	return (0);
}
