/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:48:16 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 16:11:05 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	while (i < (int)n && (unsigned char)src2[i] != (unsigned char)c)
	{
		dest2[i] = (unsigned char)src2[i];
		++i;
	}
	if (i < (int)n)
	{
		dest2[i] = (unsigned char)c;
		return ((void *)dest2 + i + 1);
	}
	return (NULL);
}
