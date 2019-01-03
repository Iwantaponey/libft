/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:12:55 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 16:22:44 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*res;
	int		i;

	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			res = s + i;
		}
		++i;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (res);
}
