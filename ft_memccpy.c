/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:48:16 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/20 19:58:19 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n && src[i] != (unsigned char)c)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n)
	{
		dest[i] = c;
		return (dest + i + 1);
	}
	return (NULL);
}
