/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:57:10 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 21:32:02 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if ((new = (t_list*) malloc(sizeof(t_list))))
	{
		if (content == NULL)
		{
			new->content = NULL;
			new->content_size = 0;
			new->next = NULL;
			return (new);
		}
		new->content = ft_memcpy(ft_memalloc(content_size), content, content_size);
		new->content_size = content_size;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
