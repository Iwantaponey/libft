/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:57:10 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 19:51:57 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if ((new = malloc(sizeof(t_list))))
	{
		if (content == NULL)
		{
			new->content = NULL;
			new->content_size = 0;
			new->next = NULL;
			return (new);
		}
		new->content = (void*)content;
		new->content_size = content_size;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
