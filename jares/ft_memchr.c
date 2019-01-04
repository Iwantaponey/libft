/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:01:58 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 16:10:08 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	i = 0;
	while (i < (int)n)
	{
		if ((unsigned char)s2[i] == (unsigned char)c)
		{
			return (s + i);
		}
		++i;
	}
	return (NULL);
}
