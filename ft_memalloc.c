/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:39:01 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 18:37:04 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	int				i;

	i = 0;
	if ((mem = malloc(size)))
	{
		while (i < (int)size)
		{
			mem[i] = '\0';
			++i;
		}
		return ((void *)mem);
	}
	return (NULL);
}
