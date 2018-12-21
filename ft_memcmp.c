/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:02:42 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 19:40:31 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*c1;
	char	*c2;

	i = 0;
	c1 = (char*)s1;
	c2 = (char*)s2;
	while (i < (int)n && c1[i] == c2[i])
	{
		++i;
	}
	return (c1 - c2);
}
