/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:48:31 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 19:34:56 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*res;

	i = 0;
	if ((res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
	{
		while (s1[i])
		{
			res[i] = s1[i];
			++i;
		}
		i = 0;
		while (s2[i])
		{
			res[i] = s2[i];
			++i;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
