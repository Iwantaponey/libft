/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:00:08 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 19:41:25 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char*)dest;
	src2 = (char*)src;
	if (dest > src)
	{
		while (n > 0)
		{
			dest2[n - 1] = src2[n - 1];
			--n;
		}
	}
	else
	{
		while (i < (int)n)
		{
			dest2[i] = src2[i];
			++i;
		}
	}
	return ((void*)dest);
}
