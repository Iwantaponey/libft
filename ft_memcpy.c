/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 17:40:45 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/20 19:59:21 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	void	*dest2;

	dest2 = dest;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest2);
}
