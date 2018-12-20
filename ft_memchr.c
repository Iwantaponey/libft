/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:01:58 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/20 19:58:35 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			return (s);
		}
		++i;
	}
	return (NULL);
}
