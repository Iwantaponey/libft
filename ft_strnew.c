/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 18:41:08 by jsegueni          #+#    #+#             */
/*   Updated: 2018/12/20 20:14:54 by jsegueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*str;

	i = 0;
	if (str = malloc(sizeof(char) * size))
	{
		while (i < size)
		{
			str[i] = '\0';
			++i;
		}
		return (str);
	}
	return (NULL);
}
