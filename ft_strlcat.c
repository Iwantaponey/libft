/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:10:49 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 18:20:24 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len;
	size_t i;
	size_t n;

	i = 0;
	len = ft_strlen(dest);
	n = size - len - 1;
	if (size <= len)
	{
		return (size + ft_strlen(src));
	}
	while (*dest)
	{
		dest++;
	}
	while (n-- && src[i])
	{
		*dest = src[i];
		++i;
		dest++;
	}
	*dest = '\0';
	return (len + ft_strlen(src));
}
