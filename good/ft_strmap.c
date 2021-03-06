/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:43:33 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 17:32:04 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f) (char))
{
	char	*res;
	int		i;

	i = 0;
	if ((res = malloc(ft_strlen(str) + 1)))
	{
		while (str[i])
		{
			res[i] = f(str[i]);
			++i;
		}
		return (res);
	}
	return (NULL);
}
