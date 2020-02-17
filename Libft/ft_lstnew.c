/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:19:51 by lmartins          #+#    #+#             */
/*   Updated: 2020/02/16 16:19:51 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	else if (!content)
		return (NULL);
	element->content = malloc(sizeof(*(element->content)) * sizeof(content));
	if (!element->content)
		return (NULL);
	element->content = ft_memcpy(element->content, content, sizeof(content));
	element->next = NULL;
	return (element);
}
