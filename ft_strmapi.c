/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:44:21 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 17:31:43 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f) (unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	if ((res = malloc(ft_strlen(str) + 1)))
	{
		while (str[i])
		{
			res[i] = f(i, str[i]);
			++i;
		}
		return (res);
	}
	return (NULL);
}
