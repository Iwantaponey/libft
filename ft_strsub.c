/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:46:33 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/20 20:17:08 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char *str, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = start;
	if (res = malloc(sizeof(char) * (len + 1)))
	{
		while (j < start + len)
		{
			res[i] = str[j];
			++i;
			++j;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
