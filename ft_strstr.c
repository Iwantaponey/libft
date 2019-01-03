/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:14:06 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 17:31:37 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	res;

	if (*needle == '\0')
		return (haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] && needle[j] && haystack[i] == needle[j])
		{
			res = i;
			while (haystack[i] && needle[j] && haystack[i] == needle[j])
			{
				++i;
				++j;
				if (j == ft_strlen(needle))
					return (haystack + res);
			}
			i = res;
		}
		++i;
	}
	return (NULL);
}
