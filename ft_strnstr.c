/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:28:58 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 17:37:04 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *hay, const char *needle, size_t lenmax)
{
	int		i;
	int		j;
	int		len;
	char	*res;

	i = 0;
	j = 0;
	len = ft_strlen(needle);
	while (hay[i] && i < (int)lenmax)
	{
		while (hay[i] && needle[j] && hay[i] == needle[j] && i < (int)lenmax)
		{
			res = hay + i;
			++i;
			++j;
			if (j == len)
			{
				return (res);
			}
		}
		++i;
		j = 0;
	}
	return (NULL);
}
