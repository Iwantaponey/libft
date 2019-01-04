/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:57:10 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 23:04:08 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if ((new = (t_list*)malloc(sizeof(t_list))))
	{
		if (content == NULL)
		{
			new->content = NULL;
			new->content_size = 0;
			new->next = NULL;
			return (new);
		}
		if (!(new->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
