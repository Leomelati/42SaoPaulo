/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 17:05:48 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/17 10:27:09 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *elem;

	elem->content = new;
	elem->next = lst;
	lst = elem;
}

int		main(void)
{
	t_list *a = NULL;
	t_list *b = NULL;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	a->content = 'b';
	b->content = 'a';
	ft_lstadd_front(&a, b);
	printf("%c %c\n", a->content, a->next);
	return (0);
}
