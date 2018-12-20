/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:14:06 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/20 20:16:47 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*res;

	if (needle == '\0')
	{
		return (haystack);
	}
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] && needle[j] && haystack[i] == needle[j])
		{
			res = haystack + i;
			++i;
			++j;
			if (j == ft_strlen(needle))
			{
				return (res);
			}
		}
		++i;
	}
	return (NULL);
}
