/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:46:33 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/21 17:25:53 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = (int)start;
	if (!(res = malloc(sizeof(char) * (len + 1))))
	{
		return (NULL);
	}
	while (j < (int)start + (int)len)
	{
		res[i] = str[j];
		++i;
		++j;
	}
	res[i] = '\0';
	return (res);
}
