/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:28:58 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 21:18:28 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *hay, const char *needle, size_t lenmax)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(*needle))
	{
		return (hay);
	}
	while (hay[i] && i < (int)lenmax)
	{
		while (needle[j] && hay[i + j] == needle[j] && (i + j) < (int)lenmax)
		{
			++j;
			if (!(needle[j]))
			{
				return (hay + i);
			}
		}
		++i;
		j = 0;
	}
	return (NULL);
}
