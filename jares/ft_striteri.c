/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:42:52 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/04 02:21:54 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f) (unsigned int, char *))
{
	int i;

	if (!str || !f)
		return ;
	i = 0;
	while (str[i])
	{
		f(i, str + i);
		++i;
	}
}
