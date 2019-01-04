/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:43:33 by jsegueni          #+#    #+#             */
/*   Updated: 2019/01/04 02:22:59 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f) (char))
{
	char	*res;
	int		i;

	if (!str || !f)
		return (NULL);
	i = 0;
	if ((res = malloc((int)ft_strlen(str) + 1)))
	{
		while (str[i])
		{
			res[i] = f(str[i]);
			++i;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
