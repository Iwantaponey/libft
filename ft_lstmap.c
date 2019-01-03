/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 19:56:35 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 21:10:46 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *new;
	t_list *res;

	new = f(lst);
	res = new;
	while (lst->next != NULL)
	{
		new->next = f(lst->next);
		lst = lst->next;
		new = new->next;
	}
	return (res);
}
