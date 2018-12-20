/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:00:08 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/20 19:59:55 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	void	*dest2;
	void	src2[n];

	dest2 = dest;
	i = 0;
	while (i < n)
	{
		src2[i] = *src;
		*src = *src + 1;
		++i;
	}
	i = 0;
	while (i < n)
	{
		*dest = *src;
		*dest = *dest + 1;
		*src = *src + 1;
		++i;
	}
	return (dest2);
}
