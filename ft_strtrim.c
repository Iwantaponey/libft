/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:49:41 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 19:35:50 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	int		i;
	char	*res;

	i = 0;
	if ((res = malloc(sizeof(char) * (ft_strlen(str) + 1))))
	{
		while (str[i])
		{
			if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			{
				res[i] = str[i];
			}
			++i;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
