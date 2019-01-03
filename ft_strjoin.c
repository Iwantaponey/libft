/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:48:31 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/03 19:33:39 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	if ((res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
	{
		while (s1[i])
		{
			res[j] = s1[i];
			++i;
			++j;
		}
		i = 0;
		while (s2[i])
		{
			res[j] = s2[i];
			++i;
			++j;
		}
		res[j] = '\0';
		return (res);
	}
	return (NULL);
}
