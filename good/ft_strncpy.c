/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:05:54 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 17:41:08 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (src[i] && i < (int)n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < (int)n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
