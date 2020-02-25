/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 19:53:05 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/24 19:53:05 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	temp = (*lst)->next;
	while (temp != NULL)
	{
		temp = (*lst)->next;
		(*del)((*lst)->content);
		free(lst);
		lst = NULL;
	}
}
