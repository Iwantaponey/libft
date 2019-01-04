/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:02:42 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 16:57:10 by jsegueni         ###   ########.fr       */
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
	while (i < (int)n && (unsigned char)c1[i] == (unsigned char)c2[i])
	{
		++i;
	}
	if (i == (int)n)
	{
		return (0);
	}
	return ((int)((unsigned char)c1[i] - (unsigned char)c2[i]));
}
